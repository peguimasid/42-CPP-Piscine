#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& other) {
  this->AMateria::operator=(other);
  return *this;
}

AMateria* Ice::clone() const {
  return new Ice(*this);
}

void use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
