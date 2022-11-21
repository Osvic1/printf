#include "main.h"

/**
* print_HEX - prints a hexadecimal number
* @num: decimal to convert
* @size: size of array
* @type: indicates if we want lowercase letters or uppercase
*
* prints an hexadecimal number from an int by continously dividing it by 16
* then storing it in an array, and putting the remainder as 0-9 or A-F
* Return: nothing
*/
int print_HEX(long int num, unsigned int size, unsigned int type)
{
	unsigned int p, i;
	int *hex;
	int r;
	char c;

	if (type == 0)
		c = 'a';
	else
		c = 'A';

	if (num < 0)
		num = num * -1;

	hex = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		hex[i] = 0;

	for (p = 0; p < size && num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}

	/* Prints the hex array */
	for (r = p - 1; r >= 0; r--)
	{
		if (type != 0)
			_putchar('0');

		if (hex[r] < 10)
			_putchar(hex[r] + '0');
		else
			_putchar((hex[r] % 10) + c);
	}
	free(hex);
	return (p);
}
