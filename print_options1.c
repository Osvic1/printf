#include "main.h"
/**
 *print_num - prints signed decimal integers
 *@args: supplied arguments
 *
 *Return: 0
 */
int print_num(va_list, args)
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
		arr[i] = k;
		i++;
		num /= 10;
	}

	for (j = i - 1; j > -1; j--, count++)
		_putchar(arr[j] + '0');
	return (count);
}
