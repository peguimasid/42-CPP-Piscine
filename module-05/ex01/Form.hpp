#pragma once

#include <iostream>

#include "Bureaucrat.hpp"

class Form {
 private:
  const std::string _name;
  bool _isSigned;
  const int _requiredGradeToSign;
  const int _requiredGradeToExecute;

 public:
  Form();
  Form(const Form &other);
  ~Form();
  Form &operator=(const Form &other);

  int getRequiredGradeToSign() const;
  int getRequiredGradeToExecute() const;
  bool getIsSigned() const;
  std::string getName() const;

  void beSigned(Bureaucrat &candidate);
};

std::ostream &operator<<(std::ostream &output, const Form &form);
