#include <stdio.h>
/**
  * main - prints lower case alphabets in reverse
  * Return: always 0 (success)
  */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
