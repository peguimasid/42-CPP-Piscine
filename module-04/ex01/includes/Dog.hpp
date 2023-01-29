#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* _brain;

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
