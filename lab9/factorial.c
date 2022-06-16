#include <stdio.h>


void factorial(int x) 
{
	int y = 1;
	for (int i = x; i > 0; i--) {
		y = y * i;
	}

	printf("%d\n", y);

}
