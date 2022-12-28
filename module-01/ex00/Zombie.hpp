/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:42:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 13:56:11 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
 private:
  std::string _name;

 public:
  Zombie(std::string name);
  ~Zombie();

  void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
