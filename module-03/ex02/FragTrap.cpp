/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:42:58 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/16 17:55:16 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << "FragTrap(" << name << ") constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap(" << this->_name << ") destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  ClapTrap::operator=(other);
  std::cout << "FragTrap copy assignment operator overload called" << std::endl;
  return *this;
}

void FragTrap::attack(const std::string& target) {
  if (!this->_energyPoints) {
    std::cout << "FragTrap " << this->_name << " don't have enough points to attack" << std::endl;
    return;
  }
  if (!this->_hitPoints) {
    std::cout << "FragTrap " << this->_name << " is already dead an cannot attack" << std::endl;
    return;
  }

  this->_energyPoints--;

  std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << this->_name << " is giving you a high five" << std::endl;
}
