/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 19:18:26 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
  DiamondTrap daniel("Daniel");

  daniel.attack("Ned");
  daniel.takeDamage(5);
  daniel.beRepaired(3);
  daniel.guardGate();
  daniel.highFivesGuys();
  daniel.whoAmI();
}
