#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	char c;

	for (i = 97; i < 123; i++)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
