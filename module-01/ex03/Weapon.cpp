/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:08:21 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:09:11 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const {
  return this->_type;
}

void Weapon::setType(std::string type) {
  this->_type = type;
}
