#include "includes/Intern.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int main() {
  ShrubberyCreationForm homeForm("home");
  RobotomyRequestForm robotForm("robot");
  PresidentialPardonForm presidentForm("president");
  Bureaucrat bu("Gui", 5);
  Intern intern;

  Form* form1;
  Form* form2;
  Form* form3;

  try {
    homeForm.action(bu);
    robotForm.action(bu);
    presidentForm.action(bu);
    bu.executeForm(presidentForm);
    form1 = intern.makeForm("shrubbery creation", "target1");
    form2 = intern.makeForm("robotomy request", "target2");
    form3 = intern.makeForm("presidential pardon", "target3");
    // form3 = intern.makeForm("not exists", "target4");

    form1->action(bu);
    form2->action(bu);
    form3->action(bu);
  } catch (std::exception& err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
