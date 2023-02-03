#include "../includes/Character.hpp"

Character::Character(const std::string& name) {
  this->_name = name;
  for (int i = 0; i < 4; i++) {
    this->_materia[i] = NULL;
  }
}

Character::Character(const Character& other) {
  this->_name = other._name;
  for (int i = 0; i < 4; i++) {
    if (other._materia[i]) {
      this->_materia[i] = other._materia[i]->clone();
    } else {
      this->_materia[i] = NULL;
    }
  }
}

Character::~Character() {
  for (int i = 0; i < 4; i++) {
    if (this->_materia[i]) {
      delete this->_materia[i];
    }
  }
}

Character& Character::operator=(const Character& other) {
  if (this == &other) return *this;

  this->_name = other._name;
  this->~Character();
  for (int i = 0; i < 4; i++) {
    if (other._materia[i]) {
      this->_materia[i] = other._materia[i]->clone();
    } else {
      this->_materia[i] = NULL;
    }
  }
}

std::string const& Character::getName() const {
  return this->_name;
}

void Character::equip(AMateria* m) {
  if (!m) return;

  for (int i = 0; i < 4; i++) {
    if (!this->_materia[i]) {
      this->_materia[i] = m;
      break;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= 4) return;
  this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx >= 4) return;
  if (!this->_materia[idx]) return;
  this->_materia[idx]->use(target);
}
