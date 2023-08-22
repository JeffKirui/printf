#include "main.h"

/**
 * procesPercentSpecifier - this handles the "%" conversion specifier
 * @args: arguments
 *
 * Return: The number of characters handled (always 1 in this case).
 */
int processPercentSpecifier(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
