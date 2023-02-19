#include <iostream>
#include <vector>

#include "easyfind.hpp"

void print(int i) {
  std::cout << i << std::endl;
}

int main(void) {
  std::vector<int> numbers(10);

  for (int i = 0; i < 10; i++) {
    numbers.push_back(i + 1);
  }

  try {
    std::vector<int>::iterator it_vector = easyfind(numbers, 7);
    std::cout << "Start print from find elem:" << std::endl;
    for_each(it_vector, numbers.end(), print);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
