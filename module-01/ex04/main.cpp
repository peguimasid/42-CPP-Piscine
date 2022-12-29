/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:50:30 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/29 17:47:48 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int error(std::string errorMessage) {
  std::cout << "\033[0;31m";
  std::cout << errorMessage << std::endl;
  std::cout << "\033[0m";
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 4) {
    return error("Usage: ./replace <filename> <stringOne> <stringTwo>");
  }

  std::string filename(argv[1]);
  std::string s1(argv[2]);
  std::string s2(argv[3]);

  std::ifstream inputFile(filename);

  if (!inputFile.is_open()) {
    return error("Unable to read file");
  }
  if (inputFile.peek() == std::ifstream::traits_type::eof()) {
    inputFile.close();
    return error("File is empty");
  }

  std::ofstream outputFile(filename + ".replace");
  std::string currentLine;

  return 0;
}
