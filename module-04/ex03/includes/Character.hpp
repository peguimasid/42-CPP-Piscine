#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
 protected:
  std::string _name;
  AMateria* _materia[4];

 public:
  // Constructors and Destructors
  Character(const std::string& name);
  Character(const Character& other);
  ~Character();
  Character& operator=(const Character& other);

  // Getters
  std::string const& getName() const;

  // Member Functions
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif
