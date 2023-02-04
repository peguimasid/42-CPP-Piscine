#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++) {
    this->_materia[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
  for (int i = 0; i < 4; i++) {
    if (other._materia[i]) {
      this->_materia[i] = other._materia[i]->clone();
    } else {
      this->_materia[i] = NULL;
    }
  }
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++) {
    if (this->_materia[i]) {
      delete this->_materia[i];
    }
  }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this == &other) return *this;

  this->~MateriaSource();
  for (int i = 0; i < 4; i++) {
    if (other._materia[i]) {
      this->_materia[i] = other._materia[i]->clone();
    } else {
      this->_materia[i] = NULL;
    }
  }
}

void MateriaSource::learnMateria(AMateria* m) {
  if (!m) return;

  for (int i = 0; i < 4; i++) {
    if (!this->_materia[i]) {
      this->_materia[i] = m;
      break;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; i++) {
    if (this->_materia[i] && this->_materia[i]->getType() == type) {
      return this->_materia[i]->clone();
    }
  }

  return NULL;
}
