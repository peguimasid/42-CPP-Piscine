#include "includes/ShrubberyCreationForm.hpp"

int main() {
  ShrubberyCreationForm homeForm("home");
  Bureaucrat bu("Gui", 137);

  try {
    homeForm.action(bu);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
