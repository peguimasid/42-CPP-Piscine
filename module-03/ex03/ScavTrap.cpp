/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:13:34 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/13 19:44:16 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  std::cout << "ScavTrap(" << name << ") constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap(" << this->_name << ") destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  ClapTrap::operator=(other);
  std::cout << "ScavTrap copy assignment operator overload called" << std::endl;
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (!this->_energyPoints) {
    std::cout << "ScavTrap " << this->_name << " don't have enough points to attack" << std::endl;
    return;
  }
  if (!this->_hitPoints) {
    std::cout << "ScavTrap " << this->_name << " is already dead an cannot attack" << std::endl;
    return;
  }

  this->_energyPoints--;

  std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->_name << " is in gate keeper mode" << std::endl;
}
