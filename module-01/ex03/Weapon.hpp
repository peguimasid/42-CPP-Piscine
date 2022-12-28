/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:05:15 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 17:27:41 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
 private:
  std::string _type;

 public:
  Weapon(std::string type);

  std::string getType() const;

  void setType(std::string type);
};

#endif
