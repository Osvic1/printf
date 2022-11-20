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
/**
 *print_hex - prints hex values in lowercase
 *@args: arguments
 *Return: i
 *
 */
int print_hex(va_list args)
{
	unsigned int h;
	int  i, j, hex;
	int arr[100];

	h = va_arg(args, unsigned int);
	i = 0;
	hex = 0;
	if (h == 0)
	{
		_putchar('0');
		return (1);
	}
	while (h != 0)
	{
		hex = h % 16;
		if (hex < 10)
			arr[i] = 48 + hex;
		else
			arr[i] = 87 + hex;
		h /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

/**
 *print_hexx - prints hex values base 16 in upper case
 *@args: arguments
 *Return: i
 *
 */
int print_hexx(va_list args)
{
	unsigned int l;
	int  i, j, hex;
	int arr[100];

	l = va_arg(args, unsigned int);
	i = 0;
	hex = 0;
	if (l == 0)
	{
		_putchar('0');
		return (1);
	}
	while (l != 0)
	{
		hex = l % 16;
		if (hex < 10)
			arr[i] = 48 + hex;
		else
			arr[i] = 55 + hex;
		l /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}
