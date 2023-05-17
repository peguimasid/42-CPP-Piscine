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
  for (size_t i = 0; i < this->_vector.size(); i++) {
    std::cout << " " << this->_vector[i];
  }
  std::cout << std::endl;
}

void PmergeMe::displaySortedSequence() {
  std::cout << "After:\t";
  for (size_t i = 0; i < this->_list.size(); i++) {
    std::cout << " " << *std::next(this->_list.begin(), i);
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

void PmergeMe::mergeVector(int leftIndex, int rightIndex, int middle) {
  int leftSize = middle - leftIndex + 1;
  int rightSize = rightIndex - middle;

  std::vector<unsigned int> leftVector(leftSize);
  std::vector<unsigned int> rightVector(rightSize);

  for (int i = 0; i < leftSize; i++) {
    leftVector[i] = this->_vector[leftIndex + i];
  }
  for (int j = 0; j < rightSize; j++) {
    rightVector[j] = this->_vector[middle + 1 + j];
  }

  int i = 0;
  int j = 0;
  int k = leftIndex;
  while (i < leftSize && j < rightSize) {
    if (leftVector[i] <= rightVector[j]) {
      this->_vector[k] = leftVector[i];
      i++;
    } else {
      this->_vector[k] = rightVector[j];
      j++;
    }
    k++;
  }

  while (i < leftSize) {
    this->_vector[k] = leftVector[i];
    i++;
    k++;
  }
  while (j < rightSize) {
    this->_vector[k] = rightVector[j];
    j++;
    k++;
  }
}

void PmergeMe::mergeInsertSortVector(int leftIndex, int rightIndex) {
  if (rightIndex - leftIndex <= 5) {
    return insertionSortVector(leftIndex, rightIndex);
  }
  int middle = (leftIndex + rightIndex) / 2;
  mergeInsertSortVector(leftIndex, middle);
  mergeInsertSortVector(middle + 1, rightIndex);
  return mergeVector(leftIndex, rightIndex, middle);
}

void PmergeMe::sortVector() {
  this->_start_vector_time = std::clock();
  mergeInsertSortVector(0, this->_vector.size() - 1);
  this->_end_vector_time = std::clock();
}

void PmergeMe::insertionSortList(int leftIndex, int rightIndex) {
  for (int i = leftIndex; i < rightIndex; i++) {
    unsigned int temp = *std::next(this->_list.begin(), i + 1);
    int j = i + 1;
    while (j > leftIndex && *std::next(this->_list.begin(), j - 1) > temp) {
      *std::next(this->_list.begin(), j) = *std::next(this->_list.begin(), j - 1);
      j--;
    }
    *std::next(this->_list.begin(), j) = temp;
  }
}

void PmergeMe::mergeList(int leftIndex, int rightIndex, int middle) {
  int leftSize = middle - leftIndex + 1;
  int rightSize = rightIndex - middle;

  std::list<unsigned int> leftList;
  std::list<unsigned int> rightList;

  for (int i = 0; i < leftSize; i++) {
    leftList.push_back(*std::next(this->_list.begin(), leftIndex + i));
  }
  for (int i = 0; i < rightSize; i++) {
    rightList.push_back(*std::next(this->_list.begin(), middle + 1 + i));
  }

  int i = 0;
  int j = 0;
  int k = leftIndex;
  while (i < leftSize && j < rightSize) {
    if (*std::next(leftList.begin(), i) <= *std::next(rightList.begin(), j)) {
      *std::next(this->_list.begin(), k) = *std::next(leftList.begin(), i);
      i++;
    } else {
      *std::next(this->_list.begin(), k) = *std::next(rightList.begin(), j);
      j++;
    }
    k++;
  }

  while (i < leftSize) {
    *std::next(this->_list.begin(), k) = *std::next(leftList.begin(), i);
    i++;
    k++;
  }
  while (j < rightSize) {
    *std::next(this->_list.begin(), k) = *std::next(rightList.begin(), j);
    j++;
    k++;
  }
}

void PmergeMe::mergeInsertSortList(int leftIndex, int rightIndex) {
  if (rightIndex - leftIndex <= 5) {
    return insertionSortList(leftIndex, rightIndex);
  }
  int middle = (leftIndex + rightIndex) / 2;
  mergeInsertSortList(leftIndex, middle);
  mergeInsertSortList(middle + 1, rightIndex);
  return mergeList(leftIndex, rightIndex, middle);
}

void PmergeMe::sortList() {
  this->_start_list_time = std::clock();
  mergeInsertSortList(0, this->_list.size() - 1);
  this->_end_list_time = std::clock();
}

void PmergeMe::execute(char **nums, int length) {
  try {
    fillContainers(nums, length);
    displayUnsortedSequence();
    sortVector();
    sortList();
    displaySortedSequence();
    double elapsed_lst = static_cast<double>(this->_end_list_time - this->_start_list_time) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_list.size() << " elements with std::list: " << elapsed_lst << " us" << std::endl;

    double elapsed_vec = static_cast<double>(this->_end_vector_time - this->_start_vector_time) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_vector.size() << " elements with std::vector: " << elapsed_vec << " us" << std::endl;
  } catch (const std::exception &e) {
    error(e.what());
  }
}
