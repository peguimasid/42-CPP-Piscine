#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Rick") {
  this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
  if (grade < 1) throw Bureaucrat::GradeTooHighException();
  if (grade > 150) throw Bureaucrat::GradeTooLowException();
  this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
  this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  this->_grade = other._grade;
  return *this;
}

const std::string Bureaucrat::getName() const {
  return this->_name;
}

int Bureaucrat::getGrade() const {
  return this->_grade;
}

void Bureaucrat::incrementGrade() {
  if (this->_grade == 1) throw Bureaucrat::GradeTooHighException();
  this->_grade--;
}

void Bureaucrat::decrementGrade() {
  if (this->_grade == 150) throw Bureaucrat::GradeTooLowException();
  this->_grade++;
}

void Bureaucrat::signForm(Form &form) {
  if (form.getIsSigned()) return;
  try {
    form.beSigned(*this);
    std::cout << *this << " signed " << form << std::endl;
  } catch (std::exception &err) {
    std::cout << *this << " couldn't sign " << form << " because " << err.what() << std::endl;
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Error: This grade is too high (Max: 1)";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Error: This grade is too low (Min: 150)";
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bureaucrat) {
  output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
  return output;
}
