#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  * Return: always 0 (success)
  */

int main(void)

{

	int i;

	for (i = 10; i < 100; i++)

	putchar(i);

	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
