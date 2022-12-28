/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:58:19 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 14:07:51 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie zombieOne("Guilhermo");
  Zombie *zombieTwo = newZombie("gmasid");
  zombieOne.announce();
  zombieTwo->announce();
  randomChump("Chaves");
  delete zombieTwo;
}
