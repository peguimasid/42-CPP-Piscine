/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:08:21 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:25:38 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
  this->_type = type;
}

std::string Weapon::getType() const {
  return this->_type;
}

void Weapon::setType(std::string type) {
  this->_type = type;
}
