#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>

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
int collect_flags(const char *, int);
/* prototypes for specifier functions */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_percentage(va_list);
int print_num(va_list);
int print_binary(va_list);
int print_octadex(va_list);
int print_unsigned_intg(va_list);
int print_hex(va_list);
int print_hexx(va_list);
int print_S(va_list);
int print_address(va_list);
int print_HEX(long int, unsigned int, unsigned int);
int print_plus_sign(va_list);
int print_space(va_list);
int print_hash_HEX(va_list);
int print_hash_octal(va_list);
int print_hash_hex(va_list);
int print_long_num(va_list);
int print_short_num(va_list);
int print_long_octal(va_list);
int print_short_octal(va_list);
int print_long_hexx(va_list);
int print_short_hexx(va_list);
int print_long_hex(va_list);
int print_short_hex(va_list);
int print_long_unsigned_intg(va_list);
int print_short_unsigned_intg(va_list);

#endif
