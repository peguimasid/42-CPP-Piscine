#include "../includes/Animal.hpp"

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

std::string Animal::getType() const {
  return this->_type;
}
