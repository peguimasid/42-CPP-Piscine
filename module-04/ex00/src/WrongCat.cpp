#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat() constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
  this->_type = type;
  std::cout << "WrongCat(" << type << ") constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  this->_type = other._type;
  std::cout << "WrongCat() copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat(" << this->_type << ") destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  this->_type = other._type;
  std::cout << "WrongCat() copy assignment operator called" << std::endl;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat makes sound: 'Meow'" << std::endl;
}
