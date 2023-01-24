#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  this->_type = "";
  std::cout << "WrongAnimal() constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
  this->_type = type;
  std::cout << "WrongAnimal(" << type << ") constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  this->_type = other._type;
  std::cout << "WrongAnimal() copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal(" << this->_type << ") destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  this->_type = other._type;
  std::cout << "WrongAnimal() copy assignment operator called" << std::endl;
  return *this;
}

std::string WrongAnimal::getType() const {
  return this->_type;
}

void WrongAnimal::makeSound() const {
  std::cout << "This is the sound of WrongAnimal" << std::endl;
}
