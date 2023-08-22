#include "main.h"

/**
 * processStringSpecifier - this handles the "s" conversion specifier
 * @args: va_list variable contains the arguments
 *
 * Return: The number of characters printed.
 */
int processStringSpecifier(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
