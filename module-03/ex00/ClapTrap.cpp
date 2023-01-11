/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CLapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:43:46 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/11 18:45:24 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
}
