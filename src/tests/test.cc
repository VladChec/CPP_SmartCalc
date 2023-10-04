#include <gtest/gtest.h>

#include "../Model/model.h"

using namespace s21;

TEST(CMainTest, ValidInput) {
  Model model;
  std::string input = "2+3";
  double expected_result = 2 + 3;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}

TEST(CMainTest, ValidInput_Subtraction) {
  Model model;
  std::string input = "7-3";
  double expected_result = 7 - 3;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}

TEST(CMainTest, ValidInput_Multiplication) {
  Model model;
  std::string input = "4*5";
  double expected_result = 4 * 5;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}

TEST(CMainTest, ValidInput_Division) {
  Model model;
  std::string input = "12/3";
  double expected_result = 12 / 3;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}

TEST(CMainTest, ValidInput_Power) {
  Model model;
  std::string input = "2 ^ 3";
  double expected_result = pow(2, 3);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}

TEST(CMainTest, ValidInput_Functions) {
  Model model;
  std::string input = "sin(1.5708)";
  double expected_result = sin(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions1) {
  Model model;
  std::string input = "cos(1.5708)";
  double expected_result = cos(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions2) {
  Model model;
  std::string input = "tan(1.5708)";
  double expected_result = tan(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions3) {
  Model model;
  std::string input = "ln(1.5708)";
  double expected_result = log(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions4) {
  Model model;
  std::string input = "log(1.5708)";
  double expected_result = log10(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions5) {
  Model model;
  std::string input = "atan(1.5708)";
  double expected_result = atan(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions11) {
  Model model;
  std::string input = "1e-3";
  double expected_result = 1 * (pow(10, -3));
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions12) {
  Model model;
  std::string input = "ln(1)";
  double expected_result = log(1);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions133) {
  Model model;
  std::string input = "log(1)";
  double expected_result = log10(1);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions123) {
  Model model;
  std::string input = "asin(1)";
  double expected_result = asin(1);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions13) {
  Model model;
  std::string input = "acos(1)";
  double expected_result = acos(1);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions1313) {
  Model model;
  std::string input = "cos(5) / sin(5)";
  double expected_result = cos(5) / sin(5);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions1333) {
  Model model;
  std::string input = "--5";
  double expected_result = 5;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions143) {
  Model model;
  std::string input = "+5";
  double expected_result = 5;
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions14) {
  Model model;
  std::string input = "sqrt(1.5708)";
  double expected_result = sqrt(1.5708);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, ValidInput_Functions15) {
  Model model;
  std::string input = "5mod2";
  double expected_result = fmod(5, 2);
  double x = 0;
  double result = model.cmain(input, x);
  ASSERT_DOUBLE_EQ(expected_result, result);
}
TEST(CMainTest, InvalidInput_DivisionByZero) {
  Model model;
  std::string input = "5/5";
  double x = 0;
  double result = model.cmain(input, x);
  // Ожидается, что функция вернет значение, указывающее на ошибку деления на
  // ноль
  ASSERT_EQ(1, result);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
