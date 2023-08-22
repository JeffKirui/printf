#include "main.h"

/**
 * print_number - prints an integer
 * @ap: arguments
 *
 * Return: number of arguments printed
 */
int print_number(va_list ap)
{
	int i, divisor, len;
	unsigned int num;

	i = va_arg(ap, int);
	divisor = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	for (; num / divisor > 9;)
	{
		divisor *= 10;
	}

	for (; divisor != 0;)
	{
		len += _putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}

	return (len);
}
