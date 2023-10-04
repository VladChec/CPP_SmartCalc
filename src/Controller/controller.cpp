#include "controller.h"
namespace s21 {
/** \details
 *Контроллер
 */
double Controller::GetResult(const std::string& stra, double point) {
  return this->model_.cmain(stra, point);
}

}  // namespace s21
