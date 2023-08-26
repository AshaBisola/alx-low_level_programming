#include <stdio.h>

/**
 * main - prints out two 2digit numbers
 * Return: returns 0
 */
int main(void)
{
int a;
int b;
int c;
int d;
int ch1;
int ch2;

for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				ch1 = (a * 10) + b;
				ch2 = (c * 10) + d;

				if (ch1 < ch2)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a == '9' && b == '8' && c == '9' && d == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');

	return (0);
}
