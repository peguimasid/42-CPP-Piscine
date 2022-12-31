/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:44:39 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/31 17:44:34 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
  std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
  void (Harl::*levelFunctions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levelMessages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int index = -1;

  for (int i = 0; i < 4; i++) {
    if (levelMessages[i] == level) index = i;
  }

  if (index == -1) return;

  return (this->*levelFunctions[index])();
}
