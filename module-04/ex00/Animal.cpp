#include "Animal.hpp"

Animal::Animal() {
  this->_type = "";
  std::cout << "Animal() constructor called" << std::endl;
}

Animal::Animal(std::string type) {
  this->_type = type;
  std::cout << "Animal(" << type << ") constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
  this->_type = other._type;
  std::cout << "Animal() copy constructor called" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal(" << this->_type << ") destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  this->_type = other._type;
  std::cout << "Animal() copy assignment operator called" << std::endl;
  return *this;
}

std::string Animal::getType() {
  return this->_type;
}

void Animal::makeSound() const {
  std::cout << "Sorry, i don't have any sound right now, but you can define by inheriting me in another class" << std::endl;
}
