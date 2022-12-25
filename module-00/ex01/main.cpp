/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 00:32:59 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

void addContact(PhoneBook *phonebook) {
  (void)phonebook;
}

void searchContact(PhoneBook *phonebook) {
  (void)phonebook;
}

void inputLoop(PhoneBook *phonebook) {
  while (true) {
    std::string input = getInputString();

    if (!isValidInput(input)) printUsage();
    if (input == "ADD") addContact(phonebook);
    if (input == "SEARCH") searchContact(phonebook);
    if (input == "EXIT") break;
  }
}

int main(void) {
  PhoneBook phonebook;
  printUsage();
  inputLoop(&phonebook);
}
