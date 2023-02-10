#pragma once
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat {
 private:
  const std::string _name;
  int _grade;

 public:
  // Constructors
  Bureaucrat();
  Bureaucrat(const std::string name, int grade);
  Bureaucrat(const Bureaucrat &other);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &other);

  // Member functions
  const std::string getName() const;
  int getGrade() const;
  void incrementGrade();
  void decrementGrade();
  void signForm(Form &form);
  void executeForm(Form const &form) const;

  // Exceptions
  class GradeTooHighException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bureaucrat);
