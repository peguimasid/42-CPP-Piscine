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

  Array<std::string> names(10);

  for (unsigned int i = 0; i < numbers.size(); i++) {
    names[i] = "Character number " + std::to_string(i + 1);
    std::cout << names[i] << std::endl;
  }
}
