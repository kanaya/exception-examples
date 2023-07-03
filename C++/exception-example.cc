#include <iostream>
#include <exception>
#include <stdexcept>

template <typename T> T divide(T y, T x) noexcept(false) {
  if (x != 0.0) {
    return y/x;
  }
  else {
    throw std::runtime_error("divide by zero");
  }
}

int main(void){
  float x = 0.0;
  float y = 2.0;
  try {
    float z = divide(y, x);
    std::cout << z << std::endl;
  }
  catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
  return 0;
}
