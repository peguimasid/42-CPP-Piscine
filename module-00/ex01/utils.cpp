/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:00:15 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 13:24:29 by gmasid           ###   ########.fr       */
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

std::string getInputString(std::string prompt) {
  std::string result;

  std::cout << prompt;
  std::cin >> result;

  return result;
}

bool isValidInput(std::string input) {
  return input == "ADD" || input == "SEARCH" || input == "EXIT";
}
