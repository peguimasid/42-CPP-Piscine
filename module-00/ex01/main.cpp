/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 23:41:27 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"

void printUsage() {
  std::cout << "\033[0;34m";
  std::cout << "Available commands:" << std::endl;
  std::cout << "- ADD: add a contact to phonebook" << std::endl;
  std::cout << "- SEARCH: search for a contact in the phonebook" << std::endl;
  std::cout << "- EXIT: quit the program" << std::endl;
  std::cout << "\033[0m\n";
}

std::string getInputString() {
  std::string result;

  std::cout << "Enter a command: ";
  std::cin >> result;

  return result;
}
bool isValidInput(std::string input) {
  return input == "ADD" || input == "SEARCH" || input == "EXIT";
}

void addContact() {
}

void searchContact() {
}

void inputLoop() {
  while (true) {
    std::string input = getInputString();

    if (!isValidInput(input)) printUsage();
    if (input == "ADD") addContact();
    if (input == "SEARCH") searchContact();
    if (input == "EXIT") break;
  }
}

int main(void) {
  printUsage();
  inputLoop();
}
