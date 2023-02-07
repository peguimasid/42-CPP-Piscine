#include "Form.hpp"

Form::Form() : _name(""), _requiredGradeToSign(1), _requiredGradeToExecute(1) {
  this->_isSigned = false;
}

Form::Form(const std::string &name) : _name(name), _requiredGradeToSign(1), _requiredGradeToExecute(1) {
  this->_isSigned = false;
}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute)
    : _name(name),
      _requiredGradeToSign(gradeToSign),
      _requiredGradeToExecute(gradeToExecute) {
  this->_isSigned = false;
  if (gradeToSign < 1 || gradeToExecute < 1) {
    throw Form::GradeTooHighException();
  }
  if (gradeToSign > 150 || gradeToExecute > 150) {
    throw Form::GradeTooLowException();
  }
}

Form::Form(const Form &other)
    : _name(other._name),
      _isSigned(other._isSigned),
      _requiredGradeToSign(other._requiredGradeToSign),
      _requiredGradeToExecute(other._requiredGradeToExecute) {}

Form::~Form() {}

Form &Form::operator=(const Form &other) {
  (void)other;
  std::cout << "Cannot be implemented since values are constants" << std::endl;
  return *this;
}
