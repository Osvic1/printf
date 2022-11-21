#include "main.h"
/**
 *print_long_hexx - print long digits of hexdec
 *@args: arguments
 *Return: p
 *
 */
int print_long_hexx(va_list args)
{
	unsigned long int p, num, hex[100];
	int r;

	num = va_arg(args, unsigned long int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 0; num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}
	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'A');
		}
	}
	return (p);
}

/**
 *print_short_hexx - prints an unsigned hexadecimal
 *@args: arguments
 *Return: count
 */
int print_short_hexx(va_list args)
{
	unsigned short int p, num, hex[100];
	int r;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 0; num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}
	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'A');
		}
	}
	return (p);
}

