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
		{"c", print_char}, {"s", print_str},
		{"%", print_percentage},{"d", print_num},
	        {"i", print_num} {NULL, NULL}
	};

	int v = 0, j = 0;

	if (str)
	{
		while (func[v].func != NULL)
		{
			if (func[v].c[j] == str[id])
				return (func[v].func);
			v++;
		}
	}
	return (NULL);
}
