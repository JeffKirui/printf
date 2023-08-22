#include "main.h"

/**
 * processCharSpecifier - this handles the "%c" conversion specifier
 * @args: va_list variable containing the arguments
 *
 * Return: The number of characters handled (always 1 in this case).
 */
int processCharSpecifier(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
