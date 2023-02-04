#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 private:
  AMateria* _materia[4];

 public:
  // Constructors and Destructors
  MateriaSource();
  MateriaSource(const MateriaSource& other);
  ~MateriaSource();
  MateriaSource& operator=(const MateriaSource& other);

  // Member Functions
  void learnMateria(AMateria* m);
  AMateria* createMateria(std::string const& type);
};

#endif
