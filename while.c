#include <stdio.h>

int main()
{
	int n = 1, acum = 10;

	while ( acum < 10 ) {
		acum += n;
		n++;
	}	
  
	printf("%i\n", acum);

	return acum;
}