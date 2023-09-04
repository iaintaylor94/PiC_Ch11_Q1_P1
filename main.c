// This program demonstrates the use of pointers

#include <stdio.h>

int main(void) {

  int count = 10, x;
  int *int_pointer;

  int_pointer = &count;
  x = *int_pointer;

  printf ("count = %d, x = %d\n", count, x);
  
  return 0;
}