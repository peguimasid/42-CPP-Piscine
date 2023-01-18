/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:17:38 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 18:44:33 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
  this->_name = "Carl Diamond";
  this->FragTrap::_hitPoints = 100;
  this->ScavTrap::_energyPoints = 50;
  this->FragTrap::_attackDamage = 30;
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
  this->_name = name;
  this->FragTrap::_hitPoints = 100;
  this->ScavTrap::_energyPoints = 50;
  this->FragTrap::_attackDamage = 30;
  std::cout << "DiamondTrap(" << name << ") constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap(" << this->_name << ") destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  ClapTrap::operator=(other);
  std::cout << "DiamondTrap copy assignment operator overload called" << std::endl;
  return *this;
}

void DiamondTrap::attack(const std::string& target) {
  if (!this->_energyPoints) {
    std::cout << "DiamondTrap " << this->_name << " don't have enough points to attack" << std::endl;
    return;
  }
  if (!this->_hitPoints) {
    std::cout << "DiamondTrap " << this->_name << " is already dead an cannot attack" << std::endl;
    return;
  }

  this->_energyPoints--;

  std::cout << "DiamondTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void DiamondTrap::guardGate() {
  std::cout << "DiamondTrap " << this->_name << " is in gate keeper mode" << std::endl;
}
