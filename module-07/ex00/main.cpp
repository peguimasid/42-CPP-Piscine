#include "whatever.hpp"

int main() {
  float x = 10.0f;
  float y = 20.0f;

  std::cout << "-----SWAP------" << std::endl;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  ::swap<float>(x, y);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "-----MIN------" << std::endl;
  std::cout << "min between x and y = " << ::min<float>(x, y) << std::endl;
  std::cout << "---------------" << std::endl;
  std::cout << "-----MAX------" << std::endl;
  std::cout << "max between x and y = " << ::max<float>(x, y) << std::endl;
  std::cout << "---------------" << std::endl;
}
