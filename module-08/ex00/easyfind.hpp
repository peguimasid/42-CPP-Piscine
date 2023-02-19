#pragma once
#include <algorithm>

template <class T>
typename T::iterator easyfind(T& container, int toFind) {
  typename T::iterator it = std::find(container.begin(), container.end(), toFind);

  if (it == container.end()) {
    throw std::runtime_error("Not found value inside container");
  }

  return it;
}
