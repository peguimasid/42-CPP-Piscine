#include "iter.hpp"

void is_even(const int &num) {
  std::cout << std::boolalpha << (num % 2 == 0) << std::endl;
}

void say_hello(const std::string &name) {
  std::cout << "Hello, " << name << " have a good day!" << std::endl;
}

int main(void) {
  int array[] = {3, 4, 10, 21, 45, 18, 9, 10};

  ::iter(array, 8, is_even);

  std::string names[] = {"John", "Karen", "Michael"};

  ::iter(names, 3, say_hello);
}
