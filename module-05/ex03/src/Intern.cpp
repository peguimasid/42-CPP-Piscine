#include "../includes/Intern.hpp"

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other) {}

// "shrubbery creation",
// "robotomy request",
// "presidential pardon",

Form *Intern::makeForm(const std::string &formName, const std::string &target) const {
  std::string _forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
}
