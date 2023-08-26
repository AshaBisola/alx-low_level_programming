#include <stdio.h>

/**
 * main - prints out all possible combination of 3 digits
 * Return: returns 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a != b && a != c && b != c) && (a < b && b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a == '7' && b == '8' && c == '9')
						break;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
