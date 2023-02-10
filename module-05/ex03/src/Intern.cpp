#include "../includes/Intern.hpp"

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
  (void)other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other) {
  (void)other;
  return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const {
  if (formName == "shrubbery creation") {
    return new ShrubberyCreationForm(target);
  }
  if (formName == "robotomy request") {
    return new RobotomyRequestForm(target);
  }
  if (formName == "presidential pardon") {
    return new PresidentialPardonForm(target);
  }

  throw new NotFoundFormException();
}

const char *Intern::NotFoundFormException::what() const throw() {
  return "requested form does not exists";
}
