#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

void print(int i) {
  std::cout << i << std::endl;
}

void test_1() {
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

void test_2() {
  std::list<int> numbers(30);

  for (int i = 0; i < 30; i++) {
    numbers.push_back(i + 1);
  }

  try {
    std::list<int>::iterator it_list = easyfind(numbers, 17);
    std::cout << "Start print from find elem:" << std::endl;
    for_each(it_list, numbers.end(), print);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}

void test_3() {
  std::list<int> numbers(30);

  for (int i = 0; i < 30; i++) {
    numbers.push_back(i + 1);
  }

  try {
    std::list<int>::iterator it_list = easyfind(numbers, 999);
    std::cout << "Start print from find elem:" << std::endl;
    for_each(it_list, numbers.end(), print);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}

int main(void) {
  test_1();
  test_2();
  test_3();
}
