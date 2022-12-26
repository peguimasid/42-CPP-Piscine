/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/26 12:11:25 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"
#include "./includes/Utils.hpp"

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

void printContactsTable(PhoneBook *phonebook) {
  int length = phonebook->getCount();

  if (!length) return emptyTableWarning();

  printHeader();
  for (int i = 0; i < length; i++) {
    printContactRow(i, phonebook->getContact(i));
  }
  printFooter();
}

int selectContact(PhoneBook *phonebook) {
  int length = phonebook->getCount();
  int selectedIndex;

  if (!length) return -1;

  std::cout << "Select an index to show: ";
  while (!(std::cin >> selectedIndex) || selectedIndex >= length || selectedIndex < 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter an index between 0 and " << length - 1 << ": ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  return selectedIndex;
}

void searchContact(PhoneBook *phonebook) {
  printContactsTable(phonebook);
  int selectedIndex = selectContact(phonebook);
  (void)selectedIndex;
  // printContactInfo(phonebook, selectedIndex); // return if selectedIndex is -1
}

void inputLoop(PhoneBook *phonebook) {
  while (true) {
    std::string input = getInput("Enter a command: ");

    if (!isValidInput(input)) printUsage();
    if (input == "ADD") addContact(phonebook);
    if (input == "SEARCH") searchContact(phonebook);
    if (input == "EXIT" || input.empty()) break;
  }
}

int main(void) {
  PhoneBook phonebook;
  Contact newContact;
  newContact.setFirstName("Guilhermo");
  newContact.setLastName("Masid");
  newContact.setNickname("gmasid");
  newContact.setPhoneNumber("24988395623");
  newContact.setDarkestSecret("Beituful");
  phonebook.addContact(newContact);

  printUsage();
  inputLoop(&phonebook);
}
