/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:50:30 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/31 00:04:57 by gmasid           ###   ########.fr       */
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
  int startIndex = 0;
  while (foundIndex >= 0) {
    result.erase(foundIndex, s1.size()).insert(foundIndex, s2);
    startIndex = foundIndex + s1.size();
    foundIndex = result.find(s1, startIndex);
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
  if (!s1.size() || !s2.size()) {
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
