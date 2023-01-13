/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/13 19:36:56 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
  ClapTrap john("John");
  ClapTrap jim("Jim");
  ClapTrap joe("Joe");
  ScavTrap jane("Jane");

  john.attack("Marge");
  john.attack("Bart");
  john.attack("Homer");
  john.takeDamage(5);
  jim.takeDamage(9);
  jim.takeDamage(10);
  joe.beRepaired(10);
  joe.takeDamage(19);
  jane.attack("Lisa");
  jane.takeDamage(99);
  jane.beRepaired(50);
  jane.guardGate();
}
