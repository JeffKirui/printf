#include "main.h"

/**
 * _printf - custom printf function
 * @format: The format string
 * @...: Additional arguments based on format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	spec_t specs[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"d", handle_integer},
		{"i", handle_integer},
		{"%", handle_percent},
		{"b", handle_binary},
		{"r", handle_unknown},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	count = get_fmt(format, specs, ap);
	va_end(ap);
	return (count);
}
