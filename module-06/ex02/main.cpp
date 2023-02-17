#include "./includes/A.hpp"
#include "./includes/B.hpp"
#include "./includes/Base.hpp"
#include "./includes/C.hpp"

void print_msg(const std::string& msg) {
  std::cout << msg << std::endl;
}

Base* generate(void) {
  int random = rand() % 3;

  if (random == 0) {
    print_msg("generated: A");
    return new A();
  }
  if (random == 1) {
    print_msg("generated: B");
    return new B();
  }
  print_msg("generated: C");
  return new C();
}

void identify(Base* p) {
  if (dynamic_cast<const A*>(p) != nullptr) {
    return print_msg("identify by pointer: A");
  }
  if (dynamic_cast<const B*>(p) != nullptr) {
    return print_msg("identify by pointer: B");
  }
  if (dynamic_cast<const C*>(p) != nullptr) {
    return print_msg("identify by pointer: C");
  }
}

void identify(Base& p) {
  if (dynamic_cast<const A*>(&p) != nullptr) {
    return print_msg("identify by ref: A");
  }
  if (dynamic_cast<const B*>(&p) != nullptr) {
    return print_msg("identify by ref: B");
  }
  if (dynamic_cast<const C*>(&p) != nullptr) {
    return print_msg("identify by ref: C");
  }
}

int main() {
  srand(time(NULL));

  Base* ptr = generate();
  identify(ptr);

  Base* ptr2 = generate();
  Base& ref = *ptr2;
  identify(ref);

  delete ptr;
  delete ptr2;
}
