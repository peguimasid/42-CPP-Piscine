/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:00:15 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/26 11:11:48 by gmasid           ###   ########.fr       */
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

std::string getInput(std::string prompt) {
  std::string input;

  std::cout << prompt;

  std::getline(std::cin, input);

  return input;
}

void printHeader() {
  std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
  std::cout << "│" << std::setw(10) << std::left << "index";
  std::cout << "│" << std::setw(10) << std::left << "First Name";
  std::cout << "│" << std::setw(10) << std::left << "Last Name";
  std::cout << "│" << std::setw(10) << std::left << "Nickname";
  std::cout << "│" << std::endl;
  std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void printFooter() {
  std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

void printContactRow(int index, Contact contact) {
  std::cout << "│" << std::setw(10) << index;
  std::cout << "│" << std::setw(10) << truncate(contact.getFirstName());
  std::cout << "│" << std::setw(10) << truncate(contact.getLastName());
  std::cout << "│" << std::setw(10) << truncate(contact.getNickname());
  std::cout << "│" << std::endl;
}
