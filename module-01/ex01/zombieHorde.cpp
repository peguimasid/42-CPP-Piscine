/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:34:42 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 14:42:39 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* horde = new Zombie[N];

  for (int i = 0; i < N; i++) {
    std::string zombieName = name + " " + std::to_string(i);
    horde[i].setName(zombieName);
  }

  return horde;
}
