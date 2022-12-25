/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 23:23:26 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"

void printUsage() {
  std::cout << "Available commands:" << std::endl;
  std::cout << "- ADD: add a contact to phonebook" << std::endl;
  std::cout << "- SEARCH: search for a contact in the phonebook" << std::endl;
  std::cout << "- EXIT: quit the program" << std::endl;
}

std::string getInputString() {
  std::string result;

  std::cout << "Enter a command: ";
  std::cin >> result;

  return result;
}

void inputLoop() {
  while (true) {
    std::string input = getInputString();

    std::cout << input << std::endl;
  }
}

int main(void) {
  printUsage();
  inputLoop();
}
