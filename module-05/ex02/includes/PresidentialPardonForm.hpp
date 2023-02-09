#pragma once

#include <fstream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  std::string _target;

 public:
  PresidentialPardonForm(const std::string &target);
  PresidentialPardonForm(const PresidentialPardonForm &other);
  ~PresidentialPardonForm();
  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

  void action(const Bureaucrat &executor) const;
};
