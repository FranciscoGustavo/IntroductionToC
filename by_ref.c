#include <stdio.h>

void duplicate(int * a);

int main() {
  int number = 5;
  printf("Antes de duplicar a = %d\n", number);
  duplicate(&number);
  printf("Despues de duplicar a = %d\n", number);
  return 0;
}

void duplicate(int * a) {
  *a *= 2;
}