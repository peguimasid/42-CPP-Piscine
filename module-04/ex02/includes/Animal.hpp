#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string _type;

 public:
  // Constructors and Destructors
  Animal();
  Animal(std::string type);
  Animal(const Animal& other);
  virtual ~Animal();

  // Copy assignment operator
  Animal& operator=(const Animal& other);

  // Getters
  std::string getType() const;

  // Member functions
  virtual void makeSound() const = 0;
};

#endif
