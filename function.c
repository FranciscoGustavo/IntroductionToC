#include <stdio.h>

int f( int a )
{
	return a * 2;
}

int main()
{
  int pow;
  pow = f(5);
  printf("%i\n", pow);
	return pow;
}