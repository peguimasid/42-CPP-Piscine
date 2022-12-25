/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:53:55 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 00:33:57 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
  this->_add_index = 0;
  this->_count = 0;
}

void PhoneBook::addContact(Contact contact) {
  this->_contacts[this->_add_index] = contact;
  if (this->_count < 8) _count++;
  this->_add_index = (this->_add_index + 1) % 8;
}

Contact PhoneBook::getContact(int index) {
  (void)index;
  Contact newContact;
  return newContact;
}
