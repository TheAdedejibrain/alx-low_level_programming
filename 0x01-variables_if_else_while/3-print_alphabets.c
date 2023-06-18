#include <stdio.h>
/**
  * main - prints alphabets letters in lower case and in upper case
  * Return: always 0 (success)
  */

int main(void)
{
	int i;

	int ii;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (ii = 'A'; ii <= 'Z'; ii++)
		putchar(ii);
	putchar('\n');
		return (0);
}
