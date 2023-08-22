#include "main.h"

/**
 * parse_fmt - get a function
 * @format: structure of input
 * @specs: a struct array
 * @args: extra arguments
 *
 * Return: number of characters
 */
int parse_fmt(const char *format, spec_t specs[], va_list args)
{
	int i, h, count, total_char = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (h = 0; specs[h].fmt != NULL; h++)
			{
				if (format[i + 1] == specs[h].fmt[0])
				{
					count = specs[h].f(args);
					if (count == -1)
						return (-1);
					total_char += count;
					break;
				}
			}
			if (specs[h].fmt == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_char += 2;
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
			total_char++;
		}
	}
	return (total_char);
}
