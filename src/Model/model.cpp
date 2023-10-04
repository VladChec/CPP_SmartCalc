#include "model.h"
namespace s21 {

int Model::prior(char op) {
  if (op == '(' || op == ')')
    return 6;
  else if (op == 'y')
    return 5;
  else if (op == 'i' || op == 'q' || op == 'o' || op == 'c' || op == 's' ||
           op == 'n' || op == 'g' || op == 'l' || op == 't' || op == 'z' ||
           op == 'r' || op == 'm')
    return 4;
  else if (op == '^')
    return 3;
  else if (op == '*' || op == '/' || op == '%')
    return 2;
  else if (op == '+' || op == '-' || op == '~')
    return 1;
  return 0;
}

bool Model::is_num(char c) {
  return (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' ||
          c == '5' || c == '6' || c == '7' || c == '8' || c == '9' ||
          c == '.' || c == 'x');
}
double Model::cmain(const std::string& stra, double point) {
  std::string arr;  // Для преобразованной строки
  int err = 0;
  std::regex combinationPattern(R"([\+\*/]{2,})");
  if (std::regex_search(stra, combinationPattern)) {
    err = 1;
  }
  std::regex invalidCombin(R"(\d+\+\-{2,}\d+)");

  if (std::regex_search(stra, invalidCombin)) {
    err = 1;
  }
  std::regex endPattern(R"((\d+|[Xx])\s*\)?$)");

  if (!std::regex_search(stra, endPattern)) {
    err = 1;
  }

  if (err == 0) {  // Вызов функции парсинга
    parse(stra, arr);
  }
  double result = 0.0;
  if (err == 0) {
    result = calculate(arr, point);  // Вызов функции вычисления
    if (std::abs(result) < 0.0000000001) {
      err = 1;
    }
  }

  return result;
}

int Model::parse(const std::string& input, std::string& output) {
  std::stack<char> stack;
  output = "";

  for (size_t i = 0; i < input.length(); i++) {
    char c = input[i];

    if (c == ' ') {
      continue;  // Пропустить пробелы
    } else if (is_num(c)) {
      while (i < input.length() &&
             (isdigit(input[i]) || input[i] == '.' || input[i] == 'x')) {
        output += input[i];
        i++;
      }
      i--;  // Вернемся на один символ назад, чтобы не пропустить следующий
            // символ после числа
      output += ' ';  // Добавляем пробел после числа

    } else if (c == '-') {
      // Проверяем, является ли "-" унарным минусом
      if (i == 0 || input[i - 1] == '+' || input[i - 1] == '-' ||
          input[i - 1] == '*' || input[i - 1] == '/' || input[i - 1] == 'e' ||
          input[i - 1] == '(' || input[i - 1] == '^') {
        stack.push('~');
      } else {
        stack.push('-');
      }
    } else if (c == '+') {
      // Проверяем, является ли "+" унарным минусом
      if (i == 0 || input[i - 1] == '+' || input[i - 1] == '-' ||
          input[i - 1] == '*' || input[i - 1] == '/' || input[i - 1] == '(' ||
          input[i - 1] == 'e' || input[i - 1] == '^') {
        stack.push('@');
      } else {
        stack.push('+');
      }
    } else if (c == '(') {
      stack.push(c);
    } else if (c == ')') {
      while (!stack.empty() && stack.top() != '(') {
        output += stack.top();
        stack.pop();
      }
      if (!stack.empty() && stack.top() == '(') {
        stack.pop();  // Удаляем '(' из стека
      } else {
        return 1;  // Непарные скобки
      }
    } else {  // Операторы и функции
      // Приоритет оператора или функции
      int current_priority = prior(c);

      // Дополнительно обрабатываем функции
      if (i + 2 < input.length() && input[i] == 's' && input[i + 1] == 'i' &&
          input[i + 2] == 'n') {
        stack.push('s');
        i += 2;
      } else if (i + 2 < input.length() && input[i] == 'c' &&
                 input[i + 1] == 'o' && input[i + 2] == 's') {
        stack.push('c');
        i += 2;
      } else if (i + 2 < input.length() && input[i] == 't' &&
                 input[i + 1] == 'a' && input[i + 2] == 'n') {
        stack.push('t');
        i += 2;
      } else if (i + 3 < input.length() && input[i] == 'a' &&
                 input[i + 1] == 'c' && input[i + 3] == 's') {
        stack.push('o');

        i += 3;
      } else if (i + 3 < input.length() && input[i] == 'a' &&
                 input[i + 1] == 's' && input[i + 3] == 'n') {
        stack.push('i');
        i += 3;
      } else if (i + 3 < input.length() && input[i] == 'a' &&
                 input[i + 1] == 't' && input[i + 3] == 'n') {
        stack.push('z');
        i += 3;
      } else if (i + 2 < input.length() && input[i] == 'm' &&
                 input[i + 1] == 'o' && input[i + 2] == 'd') {
        stack.push('%');
        i += 2;
      } else if (i + 3 < input.length() && input[i] == 's' &&
                 input[i + 1] == 'q' && input[i + 3] == 't') {
        stack.push('q');
        i += 3;
      } else if (i + 1 < input.length() && input[i] == 'l' &&
                 input[i + 1] == 'n') {
        stack.push('n');
        i += 1;
      } else if (i + 2 < input.length() && input[i] == 'l' &&
                 input[i + 1] == 'o' && input[i + 2] == 'g') {
        stack.push('l');
        i += 2;
      } else {
        // Добавляем текущий оператор в стек
        while (!stack.empty() && prior(stack.top()) >= current_priority) {
          output += stack.top();
          stack.pop();
        }
        stack.push(c);
      }
    }
  }

  while (!stack.empty()) {
    if (stack.top() == '(') {
      return 1;  // Непарные скобки
    }
    output += stack.top();
    stack.pop();
  }

  return 0;
}
/** \details
 *Функция парсинга входной строки и преобразования ее в Польскую нотацию
 */
double Model::calculate(const std::string& input, double point) {
  std::stack<double> NumStack;

  for (size_t i = 0; i < input.length(); i++) {
    char c = input[i];
    double b = 0;
    double a = 0;
    if (isdigit(c)) {
      double tmp = 0;
      while (i < input.length() && (isdigit(input[i]) || input[i] == '.')) {
        if (input[i] == '.') {
          i++;
          double fraction = 0.1;
          while (i < input.length() && isdigit(input[i])) {
            tmp += (input[i] - '0') * fraction;
            fraction /= 10.0;
            i++;
          }
        } else {
          tmp = tmp * 10 + (input[i] - '0');
          i++;
        }
      }
      i--;  // Вернемся на один символ назад, чтобы не пропустить следующий
            // символ после числа
      NumStack.push(tmp);
    } else if ((c) == '~') {
      b = NumStack.top();
      NumStack.pop();
      NumStack.push(b * -1);
    } else if ((c) == '~') {
      b = NumStack.top();
      NumStack.pop();
      NumStack.push(b * 1);
    } else if ((c) == 'x') {
      NumStack.push(point);  // Заменяем 'x' на переданное значение числа x
    } else if ((c) == 'e') {
      b = NumStack.top();
      NumStack.pop();
      a = NumStack.top();
      NumStack.pop();
      switch ((c)) {
        case 'e':
          NumStack.push(a * pow(10, b));
          break;
      }
    } else if ((c) == '+' || (c) == '-' || (c) == '*' || (c) == '/' ||
               (c) == '%' || (c) == '^') {
      b = NumStack.top();
      NumStack.pop();
      a = NumStack.top();
      NumStack.pop();

      // if (std::abs(a) < 0.0000000001 || std::abs(b) < 0.0000000001) {
      //   return 0.0000000001;
      // }
      /**
       * Выполняем арифметическое действие и заносим результат в стек чисел
       */

      switch ((c)) {
        case '+':
          NumStack.push(a + b);
          break;
        case '-':
          NumStack.push(a - b);
          break;
        case '*':
          NumStack.push(a * b);
          break;
        case '/':
          // if (std::abs(b) < 0.0000000001) {
          //   return 0.0000000001;  // Обработка деления на ноль
          // }
          NumStack.push(a / b);
          break;
        case '%':
          NumStack.push(fmod(a, b));
          break;
        case '^':
          NumStack.push(pow(a, b));
          break;
      }
    } else if ((c) == 's' || (c) == 'c' || (c) == 'q' || (c) == 'i' ||
               (c) == 'o' || (c) == 'n' || (c) == 't' || (c) == 'g' ||
               (c) == 'l' || (c) == 'z') {
      if (NumStack.empty()) {
        return 0.0000000001;
      }
      a = NumStack.top();
      NumStack.pop();
      switch ((c)) {
        case 's':
          NumStack.push(sin(a));
          break;
        case 'c':
          NumStack.push(cos(a));
          break;
        case 'q':
          NumStack.push(sqrt(a));
          break;
        case 'l':
          NumStack.push(log10(a));
          break;
        case 't':
          NumStack.push(tan(a));
          break;
        case 'g':
          NumStack.push(cos(a) / sin(a));
          break;
        case 'i':
          NumStack.push(asin(a));
          break;
        case 'o':
          NumStack.push(acos(a));
          break;
        case 'n':
          NumStack.push(log(a));
          break;
        case 'z':
          NumStack.push(atan(a));
          break;
      }
    }
  }

  if (NumStack.size() != 1) {
    return 0.0000000001;
  } else {
    return NumStack.top();
  }
}

}  // namespace s21
