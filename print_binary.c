#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary to stdout
 * @n: The unsigned int to print in binary
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	if (n > 1)
	{
		return print_binary(n / 2) + 1;
	}

	_putchar((n % 2) + '0');
	return (1);
}
