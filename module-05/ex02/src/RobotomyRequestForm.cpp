#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Shrubbery", 72, 45) {
  this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
  this->_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  this->Form::operator=(other);
  return *this;
}

void RobotomyRequestForm::action(const Bureaucrat &executor) const {
  // TODO: implement this
}
