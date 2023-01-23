#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string _type;

 public:
  // Constructors and Destructors
  Animal();
  Animal(std::string name);
  Animal(const Animal& other);
  ~Animal();

  // Copy assignment operator
  Animal& operator=(const Animal& other);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
