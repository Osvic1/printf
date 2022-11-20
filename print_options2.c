#include "main.h"

/**
 * print_octadex - prints a num in octa format
 * @args: arguments
 *
 * Return: count
 */

int print_octadex(va_list args)
{
	unsigned int v, num, oct[100];
	int r;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');

		return (1);
	}

	/* continously divide by 8 and place in an array to be printed */
	for (v = 0; num != 0; v++)
	{
		oct[v] = num % 8;
		num /= 8;
	}

	for (r = v - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (v);
}


/**
 * print_unsigned_intg - prints an unsigned integer
 * @args: arguments
 *
 * Return: count
 */

int print_unsigned_intg(va_list args)

{
	unsigned int arr[100], i = 0, r, count = 0;
	int v;
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* keep dividing the number by 10 and store it in arr */

	while (num != 0)

	{
		r = num % 10;
		arr[i] = r;
		i++;

		num /= 10;
	}

	for (v = i - 1; v > -1; v--, count++)
		_putchar(arr[v] + '0');

	return (count);
}
