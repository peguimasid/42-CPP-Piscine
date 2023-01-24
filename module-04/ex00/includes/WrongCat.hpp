#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  // Constructors and Destructors
  WrongCat();
  WrongCat(std::string type);
  WrongCat(const WrongCat& other);
  ~WrongCat();

  // Copy assignment operator
  WrongCat& operator=(const WrongCat& other);

  // Member functions
  void makeSound() const;
};

#endif
