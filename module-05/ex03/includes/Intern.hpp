#pragma once
#include "Form.hpp"

class Intern {
 public:
  Intern();
  Intern(const Intern &other);
  ~Intern();
  Intern &operator=(const Intern &other);

  Form *makeForm(const std::string &formName, const std::string &target) const;

  class NotFoundFormException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};
