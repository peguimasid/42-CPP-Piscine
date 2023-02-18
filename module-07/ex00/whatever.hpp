#include <iostream>

template <typename T>
void swap(T &x, T &y) {
  T tmp = x;
  x = y;
  y = tmp;
}

template <typename T>
T min(T &x, T &y) {
  return x < y ? x : y;
}
