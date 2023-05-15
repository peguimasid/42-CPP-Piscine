#pragma once
#include <iostream>
#include <list>
#include <vector>

class PmergeMe {
 private:
  std::vector<unsigned int> _vector;
  std::list<unsigned int> _list;

 public:
  // Constructors and Destructors
  PmergeMe();
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  ~PmergeMe();

  void execute(char **nums, int length);
  void fillContainers(char **nums, int length);

  void displayUnsortedSequence();
};
