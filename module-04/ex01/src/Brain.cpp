#include "../includes/Brain.hpp"

Brain::Brain() {
  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = "This is idea number " + i + 1;
  }

  std::cout << "Brain() constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = other._ideas[i];
  }
  std::cout << "Brain() copy constructor called" << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain() destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  if (this == &other) return *this;

  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = other._ideas[i];
  }
  std::cout << "Brain() copy assignment operator called" << std::endl;
  return *this;
}

std::string& Brain::getIdea(int index) {
  return this->_ideas[index];
}
