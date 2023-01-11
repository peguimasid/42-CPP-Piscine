/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CLapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:43:46 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/11 19:23:53 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void error(std::string message) {
  std::cout << message << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Default constructor called" << std::endl;
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
  if (!this->_energyPoints) return error("You don't have enough points");
  if (!this->_hitPoints) return error("You're dead");

  this->_energyPoints--;

  std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}
