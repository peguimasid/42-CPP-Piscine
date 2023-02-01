#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  // Constructors and Destructors
  Cure();
  Cure(const Cure& other);
  ~Cure();
  Cure& operator=(const Cure& other);

  // Member Functions
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
