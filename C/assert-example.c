#include <assert.h>
#include <stdio.h>

float divide(float y, float x) {
  assert(x != 0.0);
  return y/x;
}

int main() {
  float x = 0.0;
  float y = 2.0;
  float z = divide(y, x); /* !!! */
  printf("%f\n", z);
  return 0;
}
