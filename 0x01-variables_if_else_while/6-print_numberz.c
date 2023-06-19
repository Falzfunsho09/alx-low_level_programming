#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n %10) + '0');

		if(n == 9; n++)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
	}
        putchar('\n');
        return (0);
}
