#include <stdio.h>
/**
 * main - Entry point 
 * Return: 0
 */

int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
