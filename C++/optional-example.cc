#include <iostream>
#include <optional>

template <typename T> std::optional<T> divide(T y, T x) noexcept {
  if (x != 0.0) {
    return {y/x};
  }
  else {
    return {};
  }
}

template <typename T> std::ostream &operator <<(std::ostream &os, const std::optional<T> &z) {
  if (z) {
    os << z.value();
  }
  else {
    os << "Nothing";
  }
  return os;
}

int main(void) {
  float x = 0.0;
  float y = 2.0;
  auto z = divide(y, x);
  std::cout << z << std::endl;
  return 0;
}

