#include "main.h"

/*Function prototypes*/
int (*handler(char z))(va_list);
int _putchr(char a);

/**
  * _printf - Our custom printf function.
  * @format: The format string.
  * ...: Variable number of arguments.
  *
  * Return: The number of characters printed.
  */
int _printf(const char *format, ...)
{
	int counter = 0, i = 0;
	char fmtSpec;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			fmtSpec = format[i + 1];
			counter = counter + (*handler(fmtSpec))(args);
			i++;
		}
		else
		{
			_putchr(format[i]);
			counter = counter + 1;
		}
		i++;
	}
	return (counter);
}
