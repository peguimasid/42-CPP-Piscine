/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:12:22 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:18 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 private:
  std::string _name;

 public:
  // Constructors and Destructors
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& other);
  ~DiamondTrap();

  // Copy assignment operator
  DiamondTrap& operator=(const DiamondTrap& other);

  // Member functions
  void attack(const std::string& target);
  void whoAmI();
};

#endif
