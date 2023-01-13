/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/13 17:51:42 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
  ScavTrap homer("Homer");

  homer.attack("Bart");
  homer.takeDamage(8);
  homer.takeDamage(2);
  homer.takeDamage(1);
  homer.attack("Lisa");
  homer.beRepaired(5);
  homer.beRepaired(3);
  homer.attack("Lisa");
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  return 0;
}