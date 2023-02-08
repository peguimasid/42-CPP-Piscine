#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  const std::string _target;

 public:
  ShrubberyCreationForm(const std::string &name);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

  void action(const Bureaucrat &executor) const;
};
