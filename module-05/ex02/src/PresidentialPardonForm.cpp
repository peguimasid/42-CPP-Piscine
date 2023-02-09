#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Shrubbery", 25, 5) {
  this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {
  this->_target = other._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  this->Form::operator=(other);
  this->_target = other._target;
  return *this;
}

void PresidentialPardonForm::action(const Bureaucrat &executor) const {
  this->Form::execute(executor);
  std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
