/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:50:30 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/29 18:44:41 by gmasid           ###   ########.fr       */
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

std::string replaceLine(std::string currentLine, std::string s1, std::string s2) {
  std::string result = currentLine;

  int foundIndex = result.find(s1);
  while (foundIndex >= 0) {
    result = result.substr(0, foundIndex) + s2 + result.substr(foundIndex + s1.size(), result.size() - 1);
    foundIndex = result.find(s1);
  }

  return result;
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
    return error("File is empty");
  }
  if (s1 == s2) {
    return error("s1 is equal to s2");
  }
  if (s1.size() == 0 || s2.size() == 0) {
    return error("Strings cannot be empty");
  }

  std::ofstream outputFile(filename + ".replace");
  std::string currentLine;

  while (getline(inputFile, currentLine)) {
    outputFile << replaceLine(currentLine, s1, s2) << std::endl;
  }

  inputFile.close();
  outputFile.close();

  return 0;
}
