#include "main.h"

/**
  * _putchr - Write a character to the standard output
  * @a: The character to be written
  *
  * Return: On success, 1 is returned; on error, -1 is returned.
  */
int _putchr(char a)
{
	return (write(1, &a, 1));
}
