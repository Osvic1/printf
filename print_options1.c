#include "main.h"
/**
 *print_num - prints signed decimal integers
 *@args: supplied arguments
 *Return: 0
 */
int print_num(va_list args)
{
	int array[100];
	int i, j, k, count, num;

	num = va_arg(args, int);

	i = 0;
	count = 0;

	if (num == 0 || !num)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	while (num != 0)
	{
		k = num % 10;
		array[i] = k;
		i++;
		num /= 10;
	}

	for (j = i - 1; j > -1; j--, count++)
		_putchar(array[j] + '0');
	return (count);
}
/**
 *print_binary - prints supplied numbers in binary
 *@args: parameters
 *Return: i
 *
 */
int print_binary(va_list args)
{
	unsigned int i, n, binary[100];
	int j;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n != 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
	return (i);
}
