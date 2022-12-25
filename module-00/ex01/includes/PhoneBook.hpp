/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:46:47 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 13:28:57 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <string>

#include "Contact.hpp"

class PhoneBook {
 private:
  int _count;
  int _add_index;
  Contact _contacts[8];

 public:
  PhoneBook();

  int getCount();
  Contact getContact(int index);

  void addContact(Contact contact);
};

#endif
