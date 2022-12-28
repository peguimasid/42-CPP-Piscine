/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:58:19 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/28 15:34:52 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "Address of string = " << &string << std::endl;
  std::cout << "Address of string ptr = " << stringPTR << std::endl;
  std::cout << "Address of string ref = " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "String using string = " << string << std::endl;
  std::cout << "String using string ptr = " << *stringPTR << std::endl;
  std::cout << "String using string ref = " << stringREF << std::endl;
}
