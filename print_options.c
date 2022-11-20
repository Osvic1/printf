#include "main.h"
/**
 *print_char - prints characters
 *@args: supplied arguments
 *Return: character
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
/*return the number of characters */
	return (1);
}

/**
 *print_str - prints a string
 *@args: supplied arguments
 *Return: number of string count
 */
int print_str(va_list args)
{
	int v;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)

{
		for (v = 0; null[i] != '\0'; v++)
			_putchar(null[v]);
		return (6);
	}

	for (v = 0; str[i] != '\0'; v++)
	{
		_putchar(str[v]);
	}
	return (v);

}


/**
 * print_percentage - prints a % character
 * @args: arguments (unused)
 *
 * Return: 1 if success
 */
int print_percentage(va_list __attribute__((unused)) args)
{
	_putchar('%');

	return (1);
}
