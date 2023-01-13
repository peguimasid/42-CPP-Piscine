/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:43:46 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/13 19:49:44 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
  this->_name = "John Doe";
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "ClapTrap(" << name << ") constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap(" << this->_name << ") destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "ClapTrap copy assignment operator overload called" << std::endl;
  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (!this->_energyPoints) {
    std::cout << "ClapTrap " << this->_name << " don't have enough points to attack" << std::endl;
    return;
  }
  if (!this->_hitPoints) {
    std::cout << "ClapTrap " << this->_name << " is already dead an cannot attack" << std::endl;
    return;
  }

  this->_energyPoints--;

  std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (!this->_hitPoints) {
    std::cout << "ClapTrap" << this->_name << " is already dead!" << std::endl;
    return;
  }
  if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " receives an attack causing his death!" << std::endl;
    return;
  }

  this->_hitPoints -= amount;
  std::cout << "ClapTrap " << this->_name << " receives an attack causing " << amount << " of damage. Points left: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->_energyPoints) {
    std::cout << "ClapTrap " << this->_name + " don't have enough points to be repaired" << std::endl;
    return;
  }

  this->_hitPoints += amount;
  this->_energyPoints--;
  std::cout << "ClapTrap " << this->_name << " is being healed by: " << amount << " points. Final Hit points is: " << this->_hitPoints << std::endl;
}
