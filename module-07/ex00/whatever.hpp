#include <iostream>

template <typename T>
void swap(T &x, T &y) {
  T tmp = x;
  x = y;
  y = tmp;
}
