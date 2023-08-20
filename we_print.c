#include "main.h"

/*Function prototypes*/
void processCharSpecifier(va_list args, int *countPtr);
void processStringSpecifier(va_list args, int *countPtr);
void processPercentSpecifier(int *countPtr);
void processIntegerSpecifier(va_list args, int *countPtr);

/**
  * _printf - A function that follows a format to give output
  * @format: A format string
  * Return: The number of charaters to be printed
  */
int _printf(const char *format, ...)
{
	int count = 0, countPtr = 0;
	char current;

	va_list args;

	va_start(args, format);

	while ((current = *(format++)) != '\0')
	{
		if (current == '%')
		{
			char specifier = *(format++);

			if (specifier == 'c')
				processCharSpecifier(args, &countPtr);
			else if (specifier == 's')
				processStringSpecifier(args, &countPtr);
			else if (specifier == '%')
				processPercentSpecifier(&countPtr);
			else if (specifier == 'd' || specifier == 'i')
			{
				processIntegerSpecifier(args, &countPtr);
				current++;
			}
			else
			{
				write(1, "%", 1);
				write(1, format - 1, 1);
				count += 2;
			}
		}
		else
		{
			write(1, &current, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
