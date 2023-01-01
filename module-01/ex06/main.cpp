/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:41:36 by gmasid            #+#    #+#             */
/*   Updated: 2023/01/01 00:32:31 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int error(std::string errorMessage) {
  std::cout << "\033[0;31m";
  std::cout << errorMessage << std::endl;
  std::cout << "\033[0m";
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    return error("Usage: ./harlFilter <complain>");
  }
  Harl harl;

  std::string complain(argv[1]);
  harl.complain(complain);
  return 0;
}
