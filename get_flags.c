#include "main.h"
/**
 *collect_flags - gets a particular function
 *@str: the string
 *@id: the index / function
 *Return: number of characters to skip
 */
int collect_flags(const char *str, int id)
{
	prt fun[] = {
		{"c", print_char}, {"d", print_num}, {" d", print_space},
		{"+d", print_plus_sign}, {"+ d", print_plus_sign},
		{" +d", print_plus_sign}, {"i", print_num},
		{"#X", print_hash_HEX}, {" i", print_space},
		{"+i", print_plus_sign}, {"+ i", print_plus_sign},
		{" +i", print_plus_sign}, {"s", print_str},
		{"%", print_percentage}, {"b", print_binary},
		{"o", print_octadex}, {"u", print_unsigned_intg},
		{"x", print_hex}, {"X", print_hexx}, {"S", print_S},
		{"p", print_address}, {"#o", print_hash_octal}, {"#x", print_hash_hex},
		{NULL, NULL}
	};
	int v = 0, j = 0;

	if (str)
	{
		while (fun[v].func != NULL)
		{
			if (fun[v].c[j] == str[id])
			{
				if (fun[v].c[j + 1] == '\0')
				{
					return (j + 1);
				}
				else
				{
					v--;
					j++;
					id++;
				}
			} v++;
		}
	} return (0);
}
