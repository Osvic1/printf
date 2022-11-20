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
	int i, j;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		j++;
	}
	return (j);
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
