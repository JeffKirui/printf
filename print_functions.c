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
/**
 * procesPercentSpecifier - this handles the "%" conversion specifier
 * @args: arguments
 *
 * Return: The number of characters handled (always 1 in this case).
 */
int processPercentSpecifier(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
  * processBinarySpecifier - this handles the "b" conversion specifier
  * @args: va_list variable contains the arguments
  *
  * Return: The number of characters printed
  */
int processBinarySpecifier(va_list args)
{
	unsigned int num;
	int len = 0;

	num = va_arg(args, unsigned int);
	len += print_bit(num);

	return (len);
}
