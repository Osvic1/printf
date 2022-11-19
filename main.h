#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *struct print - proto struct 
 *@c: test parameter
 *@func: function to  print data with corresponding specifier
 */
typedef struct print
{
	/* for all formats*/
	char *c;
	int (*func)(va_list);
} prt;

int (*get_func(const char *format, ...);
/* prototypes for specifier functions */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percentage(va_list args);
#endif
