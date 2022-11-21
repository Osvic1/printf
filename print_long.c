#include "main.h"
/**
 *print_long_number - prints a long integer
 *@args: arguments
 *Return: count
 */
int print_long_num(va_list args)
{
	long int num;
	unsigned long int num_t, temp, i, div = 1, count = 0;

	num = va_arg(args, long int);
	if (num < 0)
	{
		num_t = num * -1;
		_putchar('-');
		count++;
	}
	else
	{
		num_t = num;
	}
	temp = num_t;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}
/**
 *print_short_number - prints a short integer number using an array
 *@args: arguments
 *Return: count
 */
int print_short_num(va_list args)
{
	short int num;
	unsigned short int num_t, temp, i, div = 1, count = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_t = num * -1;
		_putchar('-');
		count++;
	}
	else
	{
		num_t = num;
	}
	temp = num_t;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}
/**
 *print_long_octal - prints a num in octal format
 *@args: arguments
 *Return: count
 */
int print_long_octal(va_list args)
{
	unsigned long int p, num, oct[100];
	long int r;

	num = va_arg(args, unsigned long int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}
	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');
	return (p);
}
/**
 *print_short_octal - prints a num in octal format
 *@args: arguments
 *Return: count
 */
int print_short_octal(va_list args)
{
	unsigned short int p, num, oct[100];
	short int r;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}
	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');
	return (p);
}
