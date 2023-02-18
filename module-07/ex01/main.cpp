#include "iter.hpp"

void is_even(const int &num) {
  std::cout << std::boolalpha << (num % 2 == 0) << std::endl;
}

int main(void) {
  int array[] = {3, 4, 10, 21, 45, 18, 9, 10};

  ::iter(array, 8, is_even);
}
