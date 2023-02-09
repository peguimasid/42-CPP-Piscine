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
  this->Form::execute(executor);
  srand(time(NULL));
  if ((rand() % 2) == 0) {
    std::cout << this->_target << " has been successfully robotomized :)" << std::endl;
  } else {
    std::cout << this->_target << " died trying to be robotomized :(" << std::endl;
  }
}
