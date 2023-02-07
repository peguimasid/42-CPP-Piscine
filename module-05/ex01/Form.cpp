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

int Form::getRequiredGradeToSign() const {
  return this->_requiredGradeToSign;
}

int Form::getRequiredGradeToExecute() const {
  return this->_requiredGradeToExecute;
}

bool Form::getIsSigned() const {
  return this->_isSigned;
}

std::string Form::getName() const {
  return this->_name;
}

void Form::beSigned(Bureaucrat &candidate) {
  if (this->_isSigned) return;
  if (candidate.getGrade() > this->_requiredGradeToSign) {
    throw Form::GradeTooLowException();
  }

  this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Error: This grade is too high (Max: 1)";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Error: This grade is too low (Min: 150)";
}

std::ostream &operator<<(std::ostream &output, const Form &form) {
  output << "Form:" << std::endl;
  output << "- Name: " << form.getName() << std::endl;
  output << "- Is Signed: " << std::boolalpha << form.getIsSigned() << std::endl;
  output << "- Grade required to sign: " << form.getRequiredGradeToSign() << std::endl;
  output << "- Grade required to execute: " << form.getRequiredGradeToExecute() << std::endl;
  return output;
}
