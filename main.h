#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/*prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);

/*Conversion specifiers*/
int print_string(char *s);
int print_int(int i);


#endif
