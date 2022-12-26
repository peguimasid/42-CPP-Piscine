/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/26 11:20:45 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

void emptyInputError() {
  std::cout << "\033[0;31m";
  std::cout << "Empty inputs are not allowed" << std::endl;
  std::cout << "\033[0m";
}

void addContact(PhoneBook *phonebook) {
  Contact newContact;
  std::string input;

  input = getInput("First Name: ");
  if (input.empty()) return emptyInputError();
  newContact.setFirstName(input);
  input = getInput("Last Name: ");
  if (input.empty()) return emptyInputError();
  newContact.setLastName(input);
  input = getInput("Nickname: ");
  if (input.empty()) return emptyInputError();
  newContact.setNickname(input);
  input = getInput("Phone Number: ");
  if (input.empty()) return emptyInputError();
  newContact.setPhoneNumber(input);
  input = getInput("Darkest Secret: ");
  if (input.empty()) return emptyInputError();
  newContact.setDarkestSecret(input);

  phonebook->addContact(newContact);
}

void searchContact(PhoneBook *phonebook) {
  int length = phonebook->getCount();

  if (!length) {
    std::cout << "Table is empty" << std::endl;
    return;
  }
  printHeader();
  for (int i = 0; i < length; i++) {
    printContactRow(i, phonebook->getContact(i));
  }
  printFooter();
}

void inputLoop(PhoneBook *phonebook) {
  while (true) {
    std::string input = getInput("Enter a command: ");

    if (!isValidInput(input)) printUsage();
    if (input == "ADD") addContact(phonebook);
    if (input == "SEARCH") searchContact(phonebook);
    if (input == "EXIT" || input == "") break;
  }
}

int main(void) {
  PhoneBook phonebook;
  printUsage();
  inputLoop(&phonebook);
}
