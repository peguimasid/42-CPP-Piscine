/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/18 18:47:53 by gmasid           ###   ########.fr       */
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

// ClapTrap("Daniel_clap_name") constructor called
// ScavTrap(void) constructor called
// FragTrap(void) constructor called
// DiamondTrap("Daniel") constructor called
// ScavTrap Daniel_clap_name attacked Ned, causing 30 points of damage!
// ClapTrap Daniel_clap_name takes 5 damage, 95 hp remaining!
// ClapTrap Daniel_clap_name is healed 3 hit points, now has 98 hit points.
// ScavTrap Daniel_clap_name has entered Gate keeper mode!
// FragTrap Daniel_clap_name would like to high five everyone!
// whoAmI(): I am DiamondTrap Daniel and my ClapTrap name is Daniel_clap_name
// DiamondTrap destructor called for Daniel
// FragTrap destructor called for Daniel_clap_name
// ScavTrap destructor called for Daniel_clap_name
// ClapTrap destructor called for Daniel_clap_name
