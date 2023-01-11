/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/11 18:22:42 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void print_triangle(Point const a, Point const b, Point const c, Point const point) {
  for (int i = 0; i <= 20; i++) {
    for (int j = 0; j <= 20; j++) {
      Point P(i, j);
      if (point.getX().toFloat() == P.getX().toFloat() && point.getY().toFloat() == P.getY().toFloat())
        std::cout << " P ";
      else if (a.getX().toFloat() == P.getX().toFloat() && a.getY().toFloat() == P.getY().toFloat())
        std::cout << " * ";
      else if (b.getX().toFloat() == P.getX().toFloat() && b.getY().toFloat() == P.getY().toFloat())
        std::cout << " * ";
      else if (c.getX().toFloat() == P.getX().toFloat() && c.getY().toFloat() == P.getY().toFloat())
        std::cout << " * ";
      else if (bsp(a, b, c, P) == true)
        std::cout << " . ";
      else
        std::cout << "   ";
    }
    std::cout << std::endl;
  }
}

int main() {
  Point A(5, 10);
  Point B(20, 0);
  Point C(20, 20);

  for (int i = 0; i <= 20; i++) {
    for (int j = 0; j <= 20; j++) {
      Point P(i, j);
      print_triangle(A, B, C, P);
      std::cout << "Point(" << P.getX() << ", " << P.getY() << ")";
      std::cout << " => is inside: " << (bsp(A, B, C, P) ? "true" : "false") << std::endl;
      std::cout << std::endl;
      std::cout << "--------------------------------" << std::endl;
    }
  }

  return 0;
}
