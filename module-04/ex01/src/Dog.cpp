#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog") {
  this->_brain = new Brain();
  std::cout << "Dog() constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
  this->_type = type;
  this->_brain = new Brain();
  std::cout << "Dog(" << type << ") constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  this->_type = other._type;
  this->_brain = new Brain(*other._brain);
  std::cout << "Dog() copy constructor called" << std::endl;
}

Dog::~Dog() {
  delete this->_brain;
  std::cout << "Dog(" << this->_type << ") destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  this->_type = other._type;
  this->_brain = new Brain(*other._brain);
  std::cout << "Dog() copy assignment operator called" << std::endl;
  return *this;
}

Brain* Dog::getBrain() {
  return this->_brain;
}

void Dog::makeSound() const {
  std::cout << "Dog makes sound: 'Bark'" << std::endl;
}
