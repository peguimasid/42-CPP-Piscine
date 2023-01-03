/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:02:52 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/03 18:59:57 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
 private:
  int _intValue;
  float _floatValue;
  static const int _fractionBits = 8;

 public:
  Fixed();
  Fixed(int initialInteger);
  Fixed(float initialFloat);
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed();

  int getRawBits();
  void setRawBits(int const raw);
};

#endif
