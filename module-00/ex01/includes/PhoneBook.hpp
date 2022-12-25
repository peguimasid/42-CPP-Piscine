/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:46:47 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 23:58:02 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <string>

#include "Contact.hpp"

class PhoneBook {
 private:
  int add_index;
  Contact _contacts[8];

 public:
  PhoneBook() {
    add_index = 0;
  }
  Contact getContact(int index);
  void setContact(Contact contact);
};

#endif
