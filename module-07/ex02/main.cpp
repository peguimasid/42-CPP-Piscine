#include "Array.hpp"

int main(void) {
  Array<int> numbers(10);

  try {
    for (unsigned int i = 0; i < numbers.size(); i++) {
      numbers[i] = (i + 1) * 10;
      std::cout << numbers[i] << std::endl;
    }
    std::cout << numbers[numbers.size() + 1] << std::endl;
  } catch (std::exception &err) {
    std::cerr << "Error: " << err.what() << std::endl;
  }
}
