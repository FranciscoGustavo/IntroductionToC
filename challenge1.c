#include <stdio.h>
#include <stdlib.h>

double calc_weight(double weight, double gravity);
void menu();

int main() {
  int opc;
  double weight = 0;
  double JUPITER = 24.79;
  double MARS = 3.711;
  double result;

  printf("Please enter your weight: ");
  scanf("%lf", &weight);
  do {
    menu();
    scanf("%i", &opc);

    switch (opc) {
      case 1:
        result = calc_weight(weight, MARS);
        break;
      case 2:
        result = calc_weight(weight, JUPITER);
        break;
      default:
        opc = 0;
        break;
    }

    system("clear");
    if(opc != 0) {
      printf("Your weight is: %lf kg\n\n", result);
    } else {
      printf("Bye!\n");
    }

  } while (opc != 0);
  
}

double calc_weight(double weight, double gravity) {
  double result;
  result = (weight / 9.81) * gravity;
  return result;
}

void menu() {
  printf("Bienvenido a calcula tu peso en otro planeta\n");
  printf("\t\t1 = Mars\n");
  printf("\t\t2 = Jupiter\n");
  printf("\t\t3 = Exit\n");
  printf("Select opction: ");
}