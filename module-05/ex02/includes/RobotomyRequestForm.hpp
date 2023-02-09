#pragma once

#include <fstream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  std::string _target;

 public:
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &other);
  ~RobotomyRequestForm();
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

  void action(const Bureaucrat &executor) const;
};
