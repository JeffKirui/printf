#include "main.h"

/**
 * handle_binary - handles the binary conversion specifier
 * @ap: arguments
 *
 * Return: number of characters printed
 */
int handle_binary(va_list ap)
{
	unsigned int num;
	int len = 0;

	num = va_arg(ap, unsigned int);
	len += print_binary(num);

	return (len);
}
