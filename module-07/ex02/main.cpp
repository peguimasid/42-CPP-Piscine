#include "Array.hpp"

int main(void) {
  int size = 10;
  Array<int> numbers(size);

  for (int i = 0; i < size; i++) {
    numbers[i] = (i + 1) * 10;
  }

  for (int i = 0; i < size; i++) {
    std::cout << numbers[i] << std::endl;
  }
}
