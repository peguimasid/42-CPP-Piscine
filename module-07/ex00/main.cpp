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
  std::cout << "-----MIN------" << std::endl;
  std::cout << "min between x and y = " << min(x, y) << std::endl;
  std::cout << "---------------" << std::endl;
  std::cout << "-----MAX------" << std::endl;
  std::cout << "max between x and y = " << max(x, y) << std::endl;
  std::cout << "---------------" << std::endl;
}
