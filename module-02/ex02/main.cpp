/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:30:42 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/07 18:04:27 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
  Fixed a(10);
  Fixed b(30);

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << (a > b) << std::endl;
  std::cout << (b > a) << std::endl;
  std::cout << (b >= a) << std::endl;
  std::cout << (b < a) << std::endl;
  std::cout << (b <= a) << std::endl;
  std::cout << (b == a) << std::endl;
  std::cout << (b != a) << std::endl;
  std::cout << (b + a) << std::endl;
  std::cout << (b - a) << std::endl;
  std::cout << (b * a) << std::endl;
  std::cout << (b / a) << std::endl;
  return 0;
}

// int main() {
//   Fixed a;
//   Fixed const b(Fixed(5.05f) * Fixed(2));
//   std::cout << a << std::endl;
//   std::cout << ++a << std::endl;
//   std::cout << a << std::endl;
//   std::cout << a++ << std::endl;
//   std::cout << a << std::endl;
//   std::cout << b << std::endl;
//   std::cout << Fixed::max(a, b) << std::endl;
//   return 0;
// }
