#include <stdio.h>
/**
  * main - prints base 16 numbers in lowercase
  * Return: alwats 0 (success)
  */

int main(void)

{
	char x;

	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (x = 'a'; x <= 'f'; i++)
		putchar(x);
	putchar('\n');
	return (0);
}
