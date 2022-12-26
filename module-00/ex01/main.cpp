/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 21:11:17 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

void addContact(PhoneBook *phonebook) {
  Contact newContact;

  newContact.setFirstName(getInput("First Name: "));
  newContact.setLastName(getInput("Last Name: "));
  newContact.setNickname(getInput("Nickname: "));
  newContact.setPhoneNumber(getInput("Phone Number: "));
  newContact.setDarkestSecret(getInput("Darkest Secret: "));
  phonebook->addContact(newContact);
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

void printRow(int index, Contact contact) {
  std::cout << "│" << std::setw(10) << index;
  std::cout << "│" << std::setw(10) << truncate(contact.getFirstName());
  std::cout << "│" << std::setw(10) << truncate(contact.getLastName());
  std::cout << "│" << std::setw(10) << truncate(contact.getNickname());
  std::cout << "│" << std::endl;
}

// TODO: print table
// TODO: while input is out of bounds, get input for index
void searchContact(PhoneBook *phonebook) {
  int length = phonebook->getCount();

  if (!length) {
    std::cout << "Table is empty" << std::endl;
    return;
  }
  printHeader();
  for (int i = 0; i < length; i++) {
    printRow(i, phonebook->getContact(i));
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
