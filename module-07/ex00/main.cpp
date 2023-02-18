#include "whatever.hpp"

int main() {
  int x = 1;
  int y = 2;

  std::cout << "-----SWAP------" << std::endl;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  swap(x, y);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "---------------" << std::endl;
}
