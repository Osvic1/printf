#include "main.h"
#include <stdarg.h>
/**
* print_HEX - jndsfj
*@args: arguments
*
* Return: nothing
*/
int print_HEX(va_list args)
{
	int i;
	int len;
	char *p;
	char n[] = "(null)";
	unsigned int h;

	len = 0;
	p = va_arg(args, char *);
	if (p == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < 32 || p[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			h = p[i];
			if (h < 16)
			{
				_putchar ('0');
				len++;
			}
			len += print_hext(h);
		}
		else
		{
			_putchar(p[i]);
			len++;
		}
	}
	return (len);
}
