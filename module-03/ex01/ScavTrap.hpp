/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:03:10 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/13 17:45:33 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  // Constructors and Destructors
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& other);
  ~ScavTrap();

  // Copy assignment operator
  ScavTrap& operator=(const ScavTrap& other);
};

#endif
