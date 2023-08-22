#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

/* C Standard library header files*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spec - Struct spec
 *
 * @fmt:The format specifier
 * @f: function pointer that points to the associated processer function
 */
typedef struct spec
{
	char *fmt;
	int (*f)(va_list);
} spec_t;

/* Function prototypes*/
int _printf(const char *format, ...);
int parse_fmt(const char *format, spec_t specs[], va_list args);
int _putchar(char c);
int print_number(va_list args);
int processCharSpecifier(va_list args);
int processStringSpecifier(va_list args);
int processIntegerSpecifier(va_list args);
int processPercentSpecifier(__attribute__((unused))va_list args);
int processBinarySpecifier(va_list args);
int print_bit(unsigned int n);

#endif /* MAIN_HEADER_H */
