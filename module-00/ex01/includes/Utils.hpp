/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:01:16 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 13:24:14 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

void printUsage();
std::string getInputString(std::string prompt);
bool isValidInput(std::string input);

#endif
