#include "main.h"
/**
 *print_plus_sign - prints +
 *@args: arguments
 *Return: count
 */
int print_plus_sign(va_list args)
{
	int num;
	unsigned int num_t, temp, i, div = 1, count = 0;

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
	if (count == 0)
	{
		_putchar('+');
		count++;
	}
	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}
/**
 *print_space - prints space
 *@args: arguments
 *Return: count
 */
int print_space(va_list args)
{
	int num;
	unsigned int num_t, temp, i, div = 1, count = 0;

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
	if (count == 0)
	{
		_putchar(' ');
		count++;
	}
	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}
