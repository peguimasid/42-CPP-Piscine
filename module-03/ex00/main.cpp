/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/11 19:52:25 by gmasid           ###   ########.fr       */
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
  return 0;
}
