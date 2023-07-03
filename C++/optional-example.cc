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

int main(void) {
  float x = 0.0;
  float y = 2.0;
  auto z = divide(y, x);
  if (z) {
    std::cout << z.value() << std::endl;
  }
  else {
    std::cerr << "Divide by zero" << std::endl;
  }
  return 0;
}

