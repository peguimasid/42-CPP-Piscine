/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:42:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 14:39:56 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
