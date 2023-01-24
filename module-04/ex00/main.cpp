#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int main(void) {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete i;
  delete j;
  return 0;
}

// int main(void) {
//   // const Animal* one = new Cat();
//   const WrongAnimal* one = new WrongCat();
//   std::cout << one->getType() << " " << std::endl;
//   one->makeSound();
//   delete one;
//   return 0;
// }
