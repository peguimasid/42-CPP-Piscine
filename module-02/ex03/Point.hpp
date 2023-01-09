/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:22:23 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/09 19:30:37 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
 private:
  const Fixed _x;
  const Fixed _y;

 public:
  // Constructors and Destructors
  Point();
  Point(const Point& point);
  Point(const float initialX, const float initialY);
  ~Point();

  // Copy assignment operator overload
  Point& operator=(const Point& point);
};

#endif
