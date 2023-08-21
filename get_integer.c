#include "main.h"

int _putchr(char a);

/**
  * put_integer - Write an integer to the standard output
  * @count: The integer to be written
  * @x: The integer to be written.
  *
  * Return: void
  */
int put_integer(int x, int count)
{
	int num = x;

	if (x < 0)
	{
		num = -x;
		_putchr('-');
		count = count + 1;
	}
	if (num / 10)
		count = put_integer(num / 10, count);
	_putchr(num % 10 + '0');

	return (count + 1);
}

