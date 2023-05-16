#include "PmergeMe.hpp"

bool error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return false;
}

bool isStringNumeric(const std::string &str) {
  for (size_t i = 0; i < str.size(); i++) {
    if (!isdigit(str[i])) return false;
  }

  return true;
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
    if (!isStringNumeric(param)) {
      throw std::invalid_argument("Only positive integers");
    }
    int num = std::atoi(param.c_str());
    if (num <= 0) {
      throw std::invalid_argument("Only positive integers");
    }

    this->_vector.push_back(num);
    this->_list.push_back(num);
  }
}

void PmergeMe::displayUnsortedSequence() {
  std::cout << "Before:\t";
  for (std::vector<unsigned int>::const_iterator it = this->_vector.begin(); it != this->_vector.end(); ++it) {
    std::cout << " " << *it;
  }
  std::cout << std::endl;
}

void PmergeMe::insertionSortVector(int leftIndex, int rightIndex) {
  for (int i = leftIndex; i < rightIndex; i++) {
    unsigned int temp = this->_vector[i + 1];
    int j = i + 1;
    while (j > leftIndex && this->_vector[j - 1] > temp) {
      this->_vector[j] = this->_vector[j - 1];
      j--;
    }
    this->_vector[j] = temp;
  }
}

void PmergeMe::mergeInsertSortVector(int leftIndex, int rightIndex) {
  this->_start_vector_time = std::clock();

  if (rightIndex - leftIndex <= 5) {
    return insertionSortVector(leftIndex, rightIndex);
  }

  this->_end_vector_time = std::clock();
}

void PmergeMe::execute(char **nums, int length) {
  try {
    fillContainers(nums, length);
    displayUnsortedSequence();
    mergeInsertSortVector(0, this->_vector.size() - 1);
  } catch (const std::exception &e) {
    error(e.what());
  }
}
