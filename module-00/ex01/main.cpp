/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 19:16:42 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

void addContact(PhoneBook *phonebook) {
  Contact newContact;

  newContact.setFirstName(getInputString("First Name: "));
  newContact.setLastName(getInputString("Last Name: "));
  newContact.setNickname(getInputString("Nickname: "));
  newContact.setPhoneNumber(getInputString("Phone Number: "));
  newContact.setDarkestSecret(getInputString("Darkest Secret: "));
  phonebook->addContact(newContact);
}

// TODO: print table
// TODO: while input is out of bounds, get input for index
void searchContact(PhoneBook *phonebook) {
  int length = phonebook->getCount();

  for (int i = 0; i < length; i++) {
    std::cout << truncate(phonebook->getContact(i).getFirstName()) << std::endl;
  }
}

void inputLoop(PhoneBook *phonebook) {
  while (true) {
    std::string input = getInputString("Enter a command: ");

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
