/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:44:39 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/01 00:33:59 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
  std::cout << std::endl;
}

void Harl::info() {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
  std::cout << std::endl;
}

void Harl::warning() {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
  std::cout << std::endl;
}

void Harl::error() {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
  std::cout << std::endl;
}

void Harl::defaultComplain() {
  std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level) {
  std::string levelMessages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int index = -1;

  for (int i = 0; i < 4; i++) {
    if (levelMessages[i] == level) index = i;
  }

  switch (index) {
    case 0:
      this->debug();
    case 1:
      this->info();
    case 2:
      this->warning();
    case 3:
      this->error();
      break;
    default:
      this->defaultComplain();
  }
}
