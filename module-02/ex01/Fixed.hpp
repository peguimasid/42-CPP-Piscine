/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:02:52 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/03 19:41:35 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>

class Fixed {
 private:
  int _value;
  static const int _fractionBits = 8;

 public:
  Fixed();
  Fixed(int initialValue);
  Fixed(float initialValue);
  Fixed(const Fixed& fixed);
  Fixed& operator=(const Fixed& fixed);
  ~Fixed();

  int toInt(void) const;
  float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif
