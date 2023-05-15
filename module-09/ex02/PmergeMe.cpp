#include "PmergeMe.hpp"

bool error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return false;
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
  this->operator=(other);
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
  (void)other;
  return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fillContainers(char **nums, int length) {
  for (int i = 0; i < length; i++) {
    std::string param = nums[i];
    std::cout << param << std::endl;
  }
}

void PmergeMe::execute(char **nums, int length) {
  try {
    fillContainers(nums, length);
  } catch (const std::exception &e) {
    error(e.what());
  }
}
