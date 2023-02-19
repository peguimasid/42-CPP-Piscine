#pragma once
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int toFind) {
  typename T::iterator it = std::find(container.begin(), container.end(), toFind);

  if (it == container.end()) {
    throw std::runtime_error("Not found value inside container");
  }

  return it;
}
