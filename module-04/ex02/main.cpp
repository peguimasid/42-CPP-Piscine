#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main(void) {
  // Animal capybara("Capybara");
  // Animal *animal2 = new Animal();

  Animal *cat = new Cat();
  Animal *dog = new Dog();

  cat->makeSound();
  dog->makeSound();
  // capybara.makeSound();

  delete cat;
  delete dog;
}
