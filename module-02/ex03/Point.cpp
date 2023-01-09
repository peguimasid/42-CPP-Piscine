/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:32:37 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/09 19:47:40 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {
  // EMPTY
}

Point::Point(const Point& point) : _x(point._x), _y(point._y) {
  // EMPTY
}

Point::Point(const float initialX, const float initialY) : _x(initialX), _y(initialY) {
  // EMPTY
}

Point::~Point() {
  // EMPTY
}

Point& Point::operator=(const Point& point) {
  (void)point;
  std::cout << "Is impossible to assign value to constant variables" << std::endl;
  return *this;
}

const Fixed Point::getX() {
  return this->_x;
}

const Fixed Point::getY() {
  return this->_y;
}
