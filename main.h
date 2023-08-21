#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

/* C standard library header files */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* function prototypes */
int  _printf(const char *format, ...);
int (*handler(char z))(va_list);
int put_character(va_list args);
int put_string(va_list args);
int put_decimal(va_list arg);
int put_integer(int x, int count);

#endif /*MAIN_HEADER_H */
