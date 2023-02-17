#pragma once
#include <iostream>

typedef struct {
  std::string name;
  unsigned int age;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
