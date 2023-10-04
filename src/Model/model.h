// #include <cctype>
#include <cmath>
#include <cstring>
#include <functional>
#include <iostream>
#include <regex>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
namespace s21 {

class Model {
 public:
 /** \brief
 *Модуль диспетчера С-функций
 */
  double cmain(const std::string& stra, double x);

 private:
  std::stack<double> numStack;
  /** \brief
   *Функция вычисления выражения
   */
  double calculate(const std::string& input, double point);
  /** \brief
 *Функция парсинга входной строки
 */
  int parse(const std::string& input, std::string& output);
  /** \brief
 *Функция проверки является ли символ числом
 */
  bool is_num(char c);
  /** \brief
 *Функция определения приоритета в стэке
 */
  int prior(char op);
};
}  // namespace s21
