/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:15:47 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:40:44 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA {
 private:
  Weapon &_weapon;
  std::string _name;

 public:
  HumanA(std::string name, Weapon &weapon);

  void attack();
};

#endif
