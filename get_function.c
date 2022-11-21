#include "main.h"

/**
 *collect_func - calls the exact function needed
 *@str: string
 *@id: function
 *Return: a pointer to the corresponding function
 *
*This function is called from the _printf function after % is encountered
 * It will return NULL if the char after % is not a specifier and just print %
 *
 */
int (*collect_func(const char *str, int id))(va_list)
{
	prt fun[] = {
		{"c", print_char}, {"s", print_str}, {"b", print_binary},
		{"%", print_percentage}, {"d", print_num},
		{"i", print_num}, {"o", print_octadex},
		{"x", print_hex}, {"X", print_hexx},
		{"p", print_address}, {"+ d", print_plus_sign},
		{"+d", print_plus_sign}, {" +d", print_plus_sign},
		{"+i", print_plus_sign}, {" +i", print_plus_sign},
		{"+ i", print_plus_sign}, {" d", print_spaci},
		{" i", print_space},
		{"u", print_unsigned_intg}, {"S", print_S}, {NULL, NULL}
	};
	int v = 0, j = 0;

	if (str)
	{
		while (fun[v].func != NULL)
		{
			if (fun[v].c[j] == str[id])
				return (fun[v].func);
			v++;
		}
	}
	return (NULL);
}
