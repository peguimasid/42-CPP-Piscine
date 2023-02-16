#pragma once
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 private:
  const std::string _name;
  bool _isSigned;
  const int _requiredGradeToSign;
  const int _requiredGradeToExecute;

 public:
  // Constructors
  Form();
  Form(const std::string &name);
  Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
  Form(const Form &other);
  virtual ~Form();
  Form &operator=(const Form &other);

  // Getters
  int getRequiredGradeToSign() const;
  int getRequiredGradeToExecute() const;
  bool getIsSigned() const;
  std::string getName() const;

  // Member functions
  void beSigned(Bureaucrat &candidate);
  void execute(Bureaucrat const &executor) const;
  virtual void action(const Bureaucrat &executor) const = 0;

  class GradeTooHighException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class AlreadySignedFormException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &output, const Form &form);
