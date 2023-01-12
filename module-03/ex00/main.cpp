/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/12 15:44:18 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap homer("Homer");

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
