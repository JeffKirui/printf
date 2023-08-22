#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spec - Struct spec
 *
 * @fmt:The operator
 * @f: The associated function
 */
typedef struct spec
{
	char *fmt;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int get_fmt(const char *format, spec_t specs[], va_list ap);

int _putchar(char c);
int print_number(va_list ap);

int handle_char(va_list ap);
int handle_string(va_list ap);
int handle_integer(va_list ap);
int handle_percent(__attribute__((unused))va_list ap);
int handle_binary(va_list ap);
int handle_unknown(va_list ap);
int print_binary(unsigned int n);

#endif /* MAIN_H */
