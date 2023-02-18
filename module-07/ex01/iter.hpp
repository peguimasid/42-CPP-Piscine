#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*callback)(const T&)) {
  for (int i = 0; i < length; i++) {
    callback(array[i]);
  }
}
