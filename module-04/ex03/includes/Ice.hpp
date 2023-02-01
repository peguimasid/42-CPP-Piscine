#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  // Constructors and Destructors
  Ice();
  Ice(const Ice& other);
  ~Ice();

  // Copy assignment operator
  Ice& operator=(const Ice& other);

  // Member Functions
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
