#include "main.h"
/**
 *collect_func - calls the exact function needed
 *@str: string
 *@id: function
 *Return: a pointer to the corresponding function
 *
 */
int (*collect_func(const char *str, int id))(va_list)
{
	prt func[] = {
		{"c", print_char}
		{NULL, NULL}
	};
}
