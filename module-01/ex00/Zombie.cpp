/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:43:54 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 14:02:48 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
  this->_name = name;
}

Zombie::~Zombie() {
  std::cout << "Zombie " << this->_name << " killed!" << std::endl;
}

void Zombie::announce() {
  std::cout << this->_name << ": ";
  std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
