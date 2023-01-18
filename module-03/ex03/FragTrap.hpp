/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:39:39 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 18:35:35 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  // Constructors and Destructors
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap& other);
  ~FragTrap();

  // Copy assignment operator
  FragTrap& operator=(const FragTrap& other);

  // Member functions
  void attack(const std::string& target);
  void highFivesGuys(void);
};

#endif
