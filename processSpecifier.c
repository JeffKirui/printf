#include "main.h"

/*Function prototypes*/
int put_integer(int x, int count);
int (*handler(char z))(va_list);
int put_character(va_list arg);
int put_string(va_list arg);
int put_decimal(va_list arg);
int _putchr(char a);

/**
  * handler - Determine the correct handler function based on the format
  * specifier.
  * @z: The format specifier.
  *
  * Return: The appropriate function pointer.
  */
int (*handler(char z))(va_list)
{
	if (z == 's')
		return (&put_string);
	else if (z == 'c')
		return (&put_character);
	else if (z == 'd' || z == 'i')
		return (&put_decimal);
	return (0);
}

/**
  * put_character - Print a character from the va_list.
  * @args: The va_list containing the character.
  *
  * Return: The number of characters printed (1).
  */
int put_character(va_list args)
{
	char val = va_arg(args, int);

	_putchr(val);
	return (1);
}

/**
  * put_string - Print a string from the va_list.
  * @args: The va_list containing the string.
  *
  * Return: The number of characters printed.
  */
int put_string(va_list args)
{
	int count = 0;
	char *val = va_arg(args, char *);

	while (*val != '\0')
	{
		_putchr(*val);
		val++;
		count++;
	}
	return (count);
}

/**
  * put_decimal - Print a decimal integer from the va_list.
  * @arg: The va_list containing the integer.
  *
  * Return: The number of characters printed.
  */
int put_decimal(va_list arg)
{
	int cnt = 0;
	int val = va_arg(arg, int);

	cnt = put_integer(val, 0);

	return (cnt);
}
