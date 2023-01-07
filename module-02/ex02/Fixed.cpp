/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:02:48 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/07 16:21:33 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and Destructors
Fixed::Fixed() {
  this->_value = 0;
}

Fixed::Fixed(int initialValue) {
  this->_value = (initialValue * 256);
}

Fixed::Fixed(float initialValue) {
  this->_value = roundf(initialValue * 256);
}

Fixed::Fixed(const Fixed& fixed) {
  this->_value = fixed._value;
}

Fixed::~Fixed() {
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& fixed) {
  this->_value = fixed._value;
  return *this;
}

// Arithmetic operators
bool Fixed::operator>(const Fixed& fixed) {
  return this->_value > fixed._value;
}

int Fixed::toInt() const {
  return this->_value / 256;
}

float Fixed::toFloat() const {
  return float(this->_value) / 256;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed) {
  output << fixed.toFloat();
  return output;
}
