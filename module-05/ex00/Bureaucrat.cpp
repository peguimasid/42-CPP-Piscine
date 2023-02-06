#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Rick") {
  this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
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

const std::string Bureaucrat::getName() {
  return this->_name;
}

int Bureaucrat::getGrade() {
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
