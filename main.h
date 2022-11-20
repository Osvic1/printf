#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
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
<<<<<<< HEAD
int print_char(va_list);
int print_str(va_list);
int print_percentage(va_list);
int print_num(va_list);

=======
int print_char(va_list);
int print_str(va_list);
int print_percentage(va_list);
int print_num(va_list);
>>>>>>> 4d4aefd7177a293d193c3c9aa5221deac9dc3424
#endif
