#pragma once
#include <iostream>

template <class T>
class Array {
 private:
  T *_array;
  unsigned int _size;

 public:
  // Constructors and Destructors
  Array();
  Array(unsigned int n);
  Array(const Array &other);
  Array &operator=(const Array &other);
  ~Array();

  // Member functions
  T &operator[](unsigned int index);
  unsigned int size();
};
