#pragma once
#include <iostream>

class Bureaucrat {
 private:
  const std::string _name;
  int _grade;

 public:
  // Constructors
  Bureaucrat();
  Bureaucrat(const std::string name, int grade);
  Bureaucrat(const Bureaucrat *other);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat *other);

  // Member functions
  int getName();
  int getGrade();
  int incrementGrade();
  int decrementGrade();

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
