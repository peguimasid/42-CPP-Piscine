#include "Span.hpp"

void test_3() {
  std::cout << "------- TEST 3 -------" << std::endl;
  try {
    Span sp(2);
    sp.addNumber(10);
    sp.addNumber(20);
    sp.addNumber(30);
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}

void test_2() {
  std::cout << "------- TEST 2 -------" << std::endl;
  Span sp(10000);
  std::vector<int> vec(10000);
  for (int i = 0; i < 10000; i++) vec[i] = i;
  sp.addRange(vec.begin(), vec.end());

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void test_1() {
  std::cout << "------- TEST 1 -------" << std::endl;
  Span sp(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

int main() {
  test_1();
  test_2();
  test_3();
}
