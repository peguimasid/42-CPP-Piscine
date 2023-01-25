#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  // Constructors and Destructors
  Cat();
  Cat(std::string type);
  Cat(const Cat& other);
  ~Cat();

  // Copy assignment operator
  Cat& operator=(const Cat& other);

  // Member functions
  void makeSound() const;
};

#endif
