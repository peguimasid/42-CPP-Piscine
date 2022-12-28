/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:58:19 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 14:45:27 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  int n = 10;

  Zombie *horde = zombieHorde(n, "Chaves");

  for (int i = 0; i < n; i++) {
    horde[i].announce();
  }

  delete[] horde;
}
