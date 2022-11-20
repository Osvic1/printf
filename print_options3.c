#include "main.h"

/**
*print_S - prints hexa value of non printable xters
*@args: arguments
*
*Return: count
*/

int print_S(va_list args)
{

int v, n = 0;
char *str
char null[] = "(null)";

str = va_arg(args, char *);
	if (str == NULL)
	{
		for (v = 0; null[v] != '\0'; v++)

			_putchar(null[v]);

		return (6);
	}

	for (v = 0; str[v] != '\0'; v++)

	{
		if (str[v] < 32 || str[v] >= 127)

		{
			_putchar(92);
			_putchar('x');
			print_HEX((long int)str[v], 2, 1);
			n += 3;
		}
		else
		{
			_putchar(str[v]);
		}
	}

	return (v + n);
}
