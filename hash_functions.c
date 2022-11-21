#include "main.h"
/**
 *print_hash_HEX - prints hash of hexadec
 *@args: arguments
 *Return: vhf
 */
int print_hash_HEX(va_list args)
{
	unsigned int p, num, hex[100];
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
	_putchar('0');
	_putchar('X');
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
	return (p + 2);
}
/**
 *print_hash_hex - prints hash of hexadec
 *@args: arguments
 *Return: iii
 */
int print_hash_hex(va_list args)
{
	unsigned int p, num, hex[100];
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
	_putchar('0');
	_putchar('x');
	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'a');
		}
	}
	return (p + 2);
}
/**
 *print_hash_octal - prints a num in octal format
 *@args: arguments
 *Return: hdh
 */
int print_hash_octal(va_list args)
{
	unsigned int p, num, oct[100];
	int r;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	_putchar('0');
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}
	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');
	return (p + 1);
}
