#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 protected:
  std::string _type;

 public:
  // Constructors and Destructors
  Dog();
  Dog(std::string type);
  Dog(const Dog& other);
  ~Dog();

  // Copy assignment operator
  Dog& operator=(const Dog& other);

  // Member functions
  void makeSound() const;
};

#endif
