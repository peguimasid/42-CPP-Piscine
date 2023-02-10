#pragma once

#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  std::string _target;

 public:
  ShrubberyCreationForm(const std::string &target);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

  void action(const Bureaucrat &executor) const;
};
