/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:01:16 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/25 21:11:08 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

std::string getInput(std::string prompt);
std::string truncate(std::string str);

void printUsage();
bool isValidInput(std::string input);

#endif
