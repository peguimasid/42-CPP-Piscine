/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:29:24 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/10 15:59:00 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c) {
  float x1 = a.getX().toFloat();
  float y1 = a.getY().toFloat();

  float x2 = b.getX().toFloat();
  float y2 = b.getY().toFloat();

  float x3 = c.getX().toFloat();
  float y3 = c.getY().toFloat();

  return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  float A = area(a, b, c);
  float A1 = area(point, b, c);
  float A2 = area(a, point, c);
  float A3 = area(a, b, point);

  return A == A1 + A2 + A3;
}
