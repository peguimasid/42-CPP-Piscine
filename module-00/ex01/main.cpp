/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 00:01:01 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

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
