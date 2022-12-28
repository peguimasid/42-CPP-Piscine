/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:22:01 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:40:57 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB {
 private:
  Weapon *_weapon;
  std::string _name;

 public:
  HumanB(std::string name);

  void setWeapon(Weapon &weapon);

  void attack();
};

#endif
