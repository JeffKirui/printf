#include "main.h"

/**
  * processCharSpecifier - this handles the "%c" conversion specifier
  * @countPtr: the pointer to the count variable
  * @args: va_list variable containing the arguments
  * Return: Nothing.
  */
void processCharSpecifier(va_list args, int *countPtr)
{
	char character = va_arg(args, int);

	write(1, &character, 1);
	(*countPtr)++;
}

/**
  * processStringSpecifier - this handles the "s" conversion specifier
  * @countPtr: the pointer to the count variable
  * @args: va_list variable contains the arguments
  * Return: Nothing.
  */
void processStringSpecifier(va_list args, int *countPtr)
{
	const char *inputString = va_arg(args, const char *);
	int length = 0;

	while (inputString[length] != '\0')
	{
		length++;
		(*countPtr)++;
	}

	write(1, inputString, length);
}

/**
  * processPercentSpecifier - this handles the "%" conversion specifier
  * @countPtr: the pointer to the count variable
  * Return: Nothing.
  */
void processPercentSpecifier(int *countPtr)
{
	write(1, "%", 1);
	(*countPtr)++;
}

/**
  * processIntegerSpecifier - thi handles both "d" and "i" conversion
  * specifiers.
  * @value: integer variable
  * Return: Nothing
  */
void processIntegerSpecifier(int value)
{
	int quotient;

	if (value == 0)
		return;

	quotient = value / 10;

	processIntegerSpecifier(quotient);
	putchr(value % 10 + '0');
}
