#include "includes/Brain.hpp"

int main(void) {
  Brain brain;

  for (int i = 0; i < 100; i++) {
    std::cout << brain.getIdea(i) << std::endl;
  }

  return 0;
}
