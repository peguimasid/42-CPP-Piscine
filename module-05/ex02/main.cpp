#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int main() {
  // ShrubberyCreationForm homeForm("home");
  RobotomyRequestForm robotForm("robot");
  Bureaucrat bu("Gui", 45);

  try {
    // homeForm.action(bu);
    robotForm.action(bu);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
