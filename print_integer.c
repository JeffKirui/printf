#include "main.h"

/**
 * processIntegerSpecifier - this hanldes the "d" and "i" conversion specifiers
 * @args: va_list variable contains the arguments
 *
 * Return: The number of characters printed.
 */
int processIntegerSpecifier(va_list args)
{
	int i;

	i = print_number(args);
	return (i);
}
