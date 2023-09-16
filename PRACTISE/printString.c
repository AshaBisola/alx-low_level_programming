#include "main.h"

int printString(const char *str)
{
	int use = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		++use;
		++i;
	}
	return (use);
}


int printRev(const char *str)
{
	int use = 0;
        int i = 0;

        if (str[i] == '\0')
        {
		return (0);
	}
	else
		printRev(str + 1);
		use = use + putchar(str[i]);
		return (use);
}

/**
 * printCSR - Print characters, strings, or reverse strings based on specifier.
 * @arg: The specifier ('c', 's', or 'r').
 *
 * Return: The number of characters printed.
 */
int printCSR(va_list arg)
{
        int use = 0;
        const char *format;
        char *c;


        if (format + 1 == "c")
        {
                use = use + write(1, &c, 1);
        }
        else if (format + 1 == "s")
        {
                use = use + printString("str");
        }
        else if (format + 1 == "r")
        {
                use = use + printRev("str");
        }

        return (use);
}
