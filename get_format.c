#include "main.h"

/**
 * get_fmt - get a function
 * @format: structure of input
 * @specs: a struct array
 * @ap: extra arguments
 *
 * Return: number of characters
 */
int get_fmt(const char *format, spec_t specs[], va_list ap)
{
	int i, j, res, print_char = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; specs[j].fmt != NULL; j++)
			{
				if (format[i + 1] == specs[j].fmt[0])
				{
					res = specs[j].f(ap);
					if (res == -1)
						return (-1);
					print_char += res;
					break;
				}
			}
			if (specs[j].fmt == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					print_char += 2;
				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			print_char++;
		}
	}
	return (print_char);
}
