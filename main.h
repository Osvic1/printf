#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <unistd.h>
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

int (*collect_func(const char *, int))(va_list);
/* prototypes for specifier functions */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_percentage(va_list);
int print_num(va_list);
#endif
