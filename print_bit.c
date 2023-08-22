#include "main.h"
/**
* print_bit - Prints unsigned int in binary to standard output
* @n: unsigned int to print in binary
*
* Return: The number of characters printed
*/
int print_bit(unsigned int n)
{
	int len = 0;

	if (n > 1)
	{
		len += print_bit(n / 2);
	}

	_putchar((n % 2) + '0');
	len++;
	return (len);
}

