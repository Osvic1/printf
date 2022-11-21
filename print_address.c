#include "main.h"
/**
 * print_address - prints the address of a variable in hex
 *@args: arguments
 *Return: count
 */
int print_address(va_list args)
{
	int i, count;
	void *str;
	long int address;
	char *n = "(nil)";

	str = va_arg(args, void*);
	if (str == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (i);
	}
	address = (long int)str;
	_putchar('0');
	_putchar('x');
	count = print_HEX(address, 12, 0);
	return (2 + count);
}
