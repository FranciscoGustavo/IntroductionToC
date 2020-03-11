#include <stdio.h>
#include <string.h>

int main() {
  char * name = "Francisco";
  char * otherName = "Gustavo";

  printf("Los nombres son %s\n", strcmp(name, otherName) == 0 ? "iguales" : "distintos");
  return 0;
}