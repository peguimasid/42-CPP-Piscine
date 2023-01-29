#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* _brain;

 public:
  // Constructors and Destructors
  Cat();
  Cat(std::string type);
  Cat(const Cat& other);
  ~Cat();

  // Copy assignment operator
  Cat& operator=(const Cat& other);
  Brain* getBrain();

  // Member functions
  void makeSound() const;
};

#endif
