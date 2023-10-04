#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include "../Model/model.h"

namespace s21 {
class Controller {
 public:
  Controller() {}
  ~Controller() {}
  /** \brief
   *Метод для взаимоействия
   */
  double GetResult(const std::string &stra, double point);

 private:
  Model model_;
};
}  // namespace s21

#endif  // SRC_CONTROLLER_CONTROLLER_H_
