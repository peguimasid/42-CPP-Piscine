/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/27 11:52:28 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
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

  if (!length) return -1;

  try {
    std::string input = getInput("Select an index to show: ");

    if (input.empty()) {
      throw std::invalid_argument("Empty inputs are not allowed");
    }

    int selectedIndex = stoi(input);

    if (selectedIndex < 0 || selectedIndex >= length) {
      throw std::invalid_argument("You provide an out of range value");
    }
    return selectedIndex;
  } catch (std::invalid_argument &error) {
    return throwError(error.what());
  } catch (...) {
    return throwError("Please provide an valid input");
  }

  return -1;
}

void printContactInfo(PhoneBook *phonebook, int selectedIndex) {
  if (selectedIndex < 0) return;

  Contact contact = phonebook->getContact(selectedIndex);

  std::cout << "\033[0;35m";
  std::cout << "First name:     " << contact.getFirstName() << std::endl;
  std::cout << "Last name:      " << contact.getLastName() << std::endl;
  std::cout << "Nickname:       " << contact.getNickname() << std::endl;
  std::cout << "Phone number:   " << contact.getPhoneNumber() << std::endl;
  std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
  std::cout << "\033[0m" << std::endl;
}

void searchContact(PhoneBook *phonebook) {
  printContactsTable(phonebook);
  int selectedIndex = selectContact(phonebook);
  printContactInfo(phonebook, selectedIndex);
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
  printUsage();
  inputLoop(&phonebook);
}
