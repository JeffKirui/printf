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
	va_list args;

	spec_t specs[] = {
		{"c", processCharSpecifier},
		{"s", processStringSpecifier},
		{"%", processPercentSpecifier},
		{"d", processIntegerSpecifier},
		{"i", processIntegerSpecifier},
		{"b", processBinarySpecifier},
		{"r", processUnknown},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	count = get_fmt(format, specs, args);
	va_end(args);
	return (count);
}
