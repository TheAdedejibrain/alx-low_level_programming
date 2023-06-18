#include <stdio.h>

/**
  * main - prints alphabets in lower case
  * Return: always 0 (success)
  */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

		putchar(i);
	putchar('\n');
	return (0);
}
