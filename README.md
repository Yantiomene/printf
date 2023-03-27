# printf()

The printf project is a collaboration between **Yaninthé Tiomene** and **Batool Harah**, actual students of Software Engineering at **ALX SE program cohort 12**.
The project aim to write a function named "_printf" which imitates the actual "printf" function of C language located in the <stdio.h> library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and prints data.
Its prototype is the following:

```
int _printf(const char *format, ...);
```
This function write its output to the stdout, the standard output stream. Returns the count of printe\
d characters when the function is successful and -1 when the function fails.
Where format contains the string that is printed.

The available convertion specifiers are:

 - %c: Prints a single character.
 - %s: Prints a string of characters.
 - %d: Prints integers.
 - %i: Prints integers.

## Usage

 - All the files are to be compiled on Ubuntu 20.04 LTS
 - Compile your code with ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format  *.c```
 - Include the "main.h" header file on the functions using the _printf()

## Examples

1- Prints the character 'H'
   - Use: `_printf("Character:[%c]\n", 'H');`
   - Output: `Character:[H]`

2- Prints the string "I am a string"
   - Use: `_printf("String:[%s]\n", "I am a string !");`
   - Output: `String:[I am a string !]`

3- Prints an integer number
   - Use: `_printf("Length:[%d, %i]\n", 39, 39);`
   - Output: `Length:[39, 39]`
   - Use: `_printf("Negative:[%d]\n", -762534);`
   - Output: `Negative:[-762534]`