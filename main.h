#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/*prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);

/*Conversion specifiers*/
int print_char(char c);
int print_string(char *s);
int print_int(int i);


#endif
