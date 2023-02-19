#include "Array.hpp"

int main(void) {
  int size = 10;
  Array<int> numbers(size);

  for (unsigned int i = 0; i < numbers.size(); i++) {
    numbers[i] = (i + 1) * 10;
    std::cout << numbers[i] << std::endl;
  }
}
