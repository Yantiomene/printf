#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>


/**
 * struct format - struct for functions that print a format
 * @type_format: format
 * @f: pointer to the function
 *
 */

typedef struct format
{
	char *type_format;
	int (*f)(va_list, char *, unsigned int);
} print_t;

/*prototypes*/
int _printf(const char *format, ...);
int print_char(va_list arg_list, char *buf, unsigned int ibuf);
int print_string(va_list arg_list, char *buf, unsigned int ibuf);
int print_int(va_list arg_list, char *buf, unsigned int ibuf);
int (*get_format_func(const char *s, int index))(va_list, char *, unsigned int);
int print_buf(char *buf, unsigned int nbuf);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);
int print_prg(va_list arg __attribute__((unused)), char *buf, unsigned int ib);

#endif
