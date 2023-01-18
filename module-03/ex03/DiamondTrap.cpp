/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:17:38 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 18:58:46 by gmasid           ###   ########.fr       */
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

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(), FragTrap() {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap(" << this->_name << ") destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  ClapTrap::operator=(other);
  ScavTrap();
  FragTrap();
  std::cout << "DiamondTrap copy assignment operator overload called" << std::endl;
  return *this;
}

void DiamondTrap::attack(const std::string& target) {
  this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "I am DiamondTrap(" << this->_name << ") and my ClapTrap is " << this->ClapTrap::_name << std::endl;
}
