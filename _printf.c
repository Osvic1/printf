/*
 * File: _printf.c
 * Auth: Omaku Festus Friday
 *       Timothy Victor
 */

#include "main.h"

/**
 *_printf - replicates the standard function of printf
 *@format: parameter containing char and format specifiers to print out
 *Return: all characters passed in right format
 *
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list lst;
	int (*p_func)(va_list);

	i = 0;
	j = 0;

	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}
	if (!format[i])
	{
		return (0);
	}

	va_start(lst, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			p_func = collect_func(format, i + 1);
			if (p_func == NULL)
			{
				_putchar('%');
				j++;
			}
			else
			{
				j = j + p_func(lst);
				i += collect_func(format, i + 1);
			}
		} else
		{
			_putchar(format[i]);
			j++;
		}
	} return (j);
}
