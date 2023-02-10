#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery", 145, 137) {
  this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
  this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  this->Form::operator=(other);
  this->_target = other._target;
  return *this;
}

void ShrubberyCreationForm::action(const Bureaucrat &executor) const {
  this->Form::execute(executor);

  std::ofstream outputFile(this->_target + "_shrubbery");

  if (!outputFile.is_open()) {
    throw std::ofstream::failure(strerror(errno));
  }

  outputFile << "               ,@@@@@@@," << std::endl;
  outputFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
  outputFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
  outputFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
  outputFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
  outputFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
  outputFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
  outputFile << "       |o|        | |         | |" << std::endl;
  outputFile << "       |.|        | |         | |" << std::endl;
  outputFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}
