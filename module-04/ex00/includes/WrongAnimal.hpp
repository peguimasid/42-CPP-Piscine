#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
 protected:
  std::string _type;

 public:
  // Constructors and Destructors
  WrongAnimal();
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal& other);
  virtual ~WrongAnimal();

  // Copy assignment operator
  WrongAnimal& operator=(const WrongAnimal& other);

  // Getters
  std::string getType() const;

  // Member functions
  void makeSound() const;
};

#endif
