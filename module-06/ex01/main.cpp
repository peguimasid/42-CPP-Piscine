#include "Data.hpp"

int main() {
  Data person;

  person.name = "Guilhermo Masid";
  person.age = 20;

  std::cout << "Person name is: " << person.name << std::endl;
  std::cout << "Person age is: " << person.age << std::endl;

  uintptr_t ptr = serialize(&person);

  std::cout << "Ptr is: " << ptr << std::endl;

  Data* newPerson = deserialize(ptr);

  std::cout << "New person name is: " << newPerson->name << std::endl;
  std::cout << "New person age is: " << newPerson->age << std::endl;
}
