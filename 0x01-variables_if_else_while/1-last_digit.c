#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Print if greater than 5, is 0, less than 6
  * Return: always 0 (success)
  */
int main(void)	
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is to zero\n", n, m);
	else (m < 6 && != 0)
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, m);
	return (0)
}
