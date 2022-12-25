/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:00:15 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 19:18:26 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Utils.hpp"

void printUsage() {
  std::cout << "\033[0;34m";
  std::cout << "Available commands:" << std::endl;
  std::cout << "- ADD: add a contact to phonebook" << std::endl;
  std::cout << "- SEARCH: search for a contact in the phonebook" << std::endl;
  std::cout << "- EXIT: quit the program" << std::endl;
  std::cout << "\033[0m\n";
}

bool isValidInput(std::string input) {
  return input == "ADD" || input == "SEARCH" || input == "EXIT";
}

std::string truncate(std::string str) {
  return str.length() > 10 ? str.substr(0, 9) + "." : str;
}

std::string getInputString(std::string prompt) {
  std::string result;

  std::cout << prompt;
  getline(std::cin, result);

  return result;
}
