/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:01:16 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/27 11:39:44 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <iomanip>
#include <iostream>
#include <string>

#include "Contact.hpp"

std::string getInput(std::string prompt);
std::string truncate(std::string str);

int throwError(std::string error);
bool isValidInput(std::string input);
void printUsage();
void emptyInputError();

void emptyTableWarning();
void printHeader();
void printFooter();
void printContactRow(int index, Contact contact);

#endif
