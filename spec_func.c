#include "main.h"

/**
 * handle_char - prints chars
 * @ap: arguments
 *
 * Return: 0. Otherwise 1
 */
int handle_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * handle_string - prints string of characters
 * @ap: arguments
 *
 * Return: 0
 */
int handle_string(va_list ap)
{
	char *str;
	int i;

	str = va_arg(ap, char *);
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
/**
 * handle_integer - prints integers
 * @ap: arguments
 *
 * Return: nothing
 */
int handle_integer(va_list ap)
{
	int i;

	i = print_number(ap);
	return (i);
}
/**
 * handle_percent - prints integers
 * @ap: arguments
 *
 * Return: 0. Otherwise 1
 */
int handle_percent(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}
