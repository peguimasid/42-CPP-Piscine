#pragma once
#include <iostream>
#include <list>
#include <vector>

class PmergeMe {
 private:
 public:
  // Constructors and Destructors
  PmergeMe();
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  ~PmergeMe();

  void execute(char **nums, int length);
};
