#pragma once
#include <ctime>
#include <iostream>
#include <list>
#include <vector>

class PmergeMe {
 private:
  std::vector<unsigned int> _vector;
  std::clock_t _start_vector_time;
  std::clock_t _end_vector_time;

  std::list<unsigned int> _list;
  std::clock_t _start_list_time;
  std::clock_t _end_list_time;

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
