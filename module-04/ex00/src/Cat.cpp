#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat() constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
  this->_type = type;
  std::cout << "Cat(" << type << ") constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
  this->_type = other._type;
  std::cout << "Cat() copy constructor called" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat(" << this->_type << ") destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  this->_type = other._type;
  std::cout << "Cat() copy assignment operator called" << std::endl;
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Cat makes sound: 'Meow'" << std::endl;
}
