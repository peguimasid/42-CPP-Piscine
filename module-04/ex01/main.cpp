#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main(void) {
  Animal *animals[20];

  for (int i = 0; i < 20; i++) {
    if (i < 10) animals[i] = new Dog();
    if (i >= 10) animals[i] = new Cat();
  }

  for (int i = 0; i < 20; i++) {
    animals[i]->makeSound();
  }

  return 0;
}
