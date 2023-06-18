#include <stdio.h>
/**
  * main - print all the letters except q and e
  * Return: always 0 (success)
  */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	if (i != 'e' && i != 'q')
		putchar(i);
	putchar('\n');
	return (0);
}
