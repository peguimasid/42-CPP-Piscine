#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int main() {
  ShrubberyCreationForm homeForm("home");
  RobotomyRequestForm robotForm("robot");
  PresidentialPardonForm presidentForm("president");
  Bureaucrat bu("Gui", 5);

  try {
    homeForm.action(bu);
    robotForm.action(bu);
    presidentForm.action(bu);
    bu.executeForm(presidentForm);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
