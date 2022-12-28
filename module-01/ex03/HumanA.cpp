/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:18:32 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:39:55 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
  this->_name = name;
}

void HumanA::attack() {
  std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
