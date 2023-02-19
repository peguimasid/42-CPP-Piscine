#pragma once
#include <iostream>

template <class T>
class Array {
 private:
  T *_array;
  unsigned int _size;

 public:
  // Constructors and Destructors
  Array() {
    this->_array = new T[0];
    this->_size = 0;
  }

  Array(unsigned int n) {
    this->_array = new T[n];
    this->_size = n;
  }

  Array(const Array &other) {
    this->_array = new T[other.size];
    this->size = other._size;
    for (int i = 0; i < other._size; i++) {
      this->_array[i] = other._array[i];
    }
  }

  Array &operator=(const Array &other) {
    if (this == &other) return *this;

    this->_array = new T[other.size];
    this->size = other._size;
    for (int i = 0; i < other._size; i++) {
      this->_array[i] = other._array[i];
    }

    return *this;
  }

  ~Array() {
    delete[] this->_array;
  }

  // Member functions
  T &operator[](unsigned int index) {
    if (index >= this->_size) {
      throw std::out_of_range("index is out of range");
    }

    return this->_array[index];
  }

  unsigned int size() {
    return this->_size;
  }
};
