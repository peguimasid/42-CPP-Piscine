#include "./includes/A.hpp"
#include "./includes/B.hpp"
#include "./includes/Base.hpp"
#include "./includes/C.hpp"

Base* generate(void) {
  int random = rand() % 3;

  if (random == 0) return new A();
  if (random == 1) return new B();
  return new C();
}

void identify(Base* p);

void identify(Base& p);

int main() {
  srand(time(NULL));
  Base* ptr = generate();
}
