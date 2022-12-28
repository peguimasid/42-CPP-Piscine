/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:42:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:43:30 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
 private:
  std::string _name;

 public:
  ~Zombie();

  void announce();
  void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
