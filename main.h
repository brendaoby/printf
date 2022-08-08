#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - Structure for printing to stdout, given a specifier
 * @specifier: The specifier recognized by this printer (without the %)
 * @run: The function to run when this printer is invoked
 */

typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

printer _get_printer(const char *specifier);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list);
int _print_str(va_list);
int _print_decimal(va_list);
int _print_int(va_list);

#endif /* MAIN_H */
