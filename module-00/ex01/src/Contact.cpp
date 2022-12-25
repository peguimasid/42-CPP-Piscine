/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:37:38 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 23:12:03 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void Contact::setFirstName(std::string value) {
  this->_first_name = value;
}

void Contact::setLastName(std::string value) {
  this->_last_name = value;
}

void Contact::setNickname(std::string value) {
  this->_nickname = value;
}

void Contact::setPhoneNumber(std::string value) {
  this->_phone_number = value;
}

void Contact::setDarkestSecret(std::string value) {
  this->_darkest_secret = value;
}

std::string Contact::getFirstName() {
  return this->_first_name;
}

std::string Contact::getLastName() {
  return this->_last_name;
}

std::string Contact::getNickname() {
  return this->_nickname;
}

std::string Contact::getPhoneNumber() {
  return this->_phone_number;
}

std::string Contact::getDarkestSecret() {
  return this->_darkest_secret;
}
