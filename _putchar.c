#include "main.h"

/**
  * _putchar - Write a character to the standard output
  * @a: The character to be written
  *
  * Return: 1 On success, otherwise -1.
  */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
