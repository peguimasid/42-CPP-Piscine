/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:42:38 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/01 00:30:10 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void defaultComplain(void);

 public:
  void complain(std::string level);
};

#endif
