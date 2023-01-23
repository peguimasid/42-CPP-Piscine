#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog() constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
  this->_type = type;
  std::cout << "Dog(" << type << ") constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  this->_type = other._type;
  std::cout << "Dog() copy constructor called" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog(" << this->_type << ") destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  this->_type = other._type;
  std::cout << "Dog() copy assignment operator called" << std::endl;
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Dog makes sound: 'Bark'" << std::endl;
}
