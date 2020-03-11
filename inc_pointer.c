#include <stdio.h>

int main() {
  int number = 5;
  int * pi = &number;
  char c = 'A';
  char * pc = &c;

  printf("Antes pi = %p y pc = %p\n", pi, pc);
  pi++;
  pc++;
  printf("Despues pi = %p y pc = %p\n", pi, pc);
  return 0;
}