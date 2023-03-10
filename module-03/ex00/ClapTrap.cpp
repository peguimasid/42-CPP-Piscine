/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:43:46 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/12 15:44:59 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void message(std::string message) {
  std::cout << message << std::endl;
}

ClapTrap::ClapTrap() {
  this->_name = "John Doe";
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "Copy assignment operator overload called" << std::endl;
  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (!this->_energyPoints) return message(this->_name + " don't have enough points to attack");
  if (!this->_hitPoints) return message(this->_name + " is already dead an cannot attack");

  this->_energyPoints--;

  std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (!this->_hitPoints) return message(this->_name + " is already dead!");
  if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    return message(this->_name + " receives an attack causing his death!");
  }

  this->_hitPoints -= amount;
  std::cout << this->_name << " receives an attack causing " << amount << " of damage. Points left: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->_energyPoints) return message(this->_name + " don't have enough points to be repaired");

  this->_hitPoints += amount;
  this->_energyPoints--;
  std::cout << this->_name << " is being healed by: " << amount << " points. Final Hitpoints is: " << this->_hitPoints << std::endl;
}
