#include "main.h"

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
