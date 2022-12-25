/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:37:38 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 23:05:23 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void Contact::setFirstName(std::string value) {
  this->_first_name = value;
}

std::string Contact::getFirstName() {
  return this->_first_name;
}
