#include <stdio.h>

void example_01(void) {
  int x = 42;
  printf("x: %d\n", x);
  printf("x address: %p\n", (void *)&x);
}
