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
		{"+ i", print_plus_sign}, {" d", print_space},
		{" i", print_space}, {"#o", print_hash_octal},
		{"#x", print_hash_hex}, {"#X", print_hash_HEX},
		{"u", print_unsigned_intg}, {"S", print_S},
		{"ld", print_long_num}, {"li", print_long_num},
		{"hd", print_short_num}, {"hi", print_short_num},
		{"lu", print_long_unsigned_intg}, {"lX", print_long_hexx},
		{"hu", print_short_unsigned_intg}, {"hX", print_short_hexx},
		{"lo", print_long_octal}, {"ho", print_short_octal},
		{"lx", print_long_hex}, {"hx", print_short_hex},
		{NULL, NULL}
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
