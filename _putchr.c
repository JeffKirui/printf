#include "main.h"

/**
  * putchr - writes the character a to stdout
  * @a: printed character
  *
  * Return: 1 (Success)
  */

int putchr(char a)
{
	return write(1, &a, 1);
}
