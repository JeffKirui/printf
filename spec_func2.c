#include "main.h"

/**
 * handle_unknown - handles unknown conversion specifiers
 * @ap: arguments
 *
 * Return: 0
 */
int handle_unknown(va_list ap)
{
        _putchar('%');
        _putchar(va_arg(ap, int));
        return (2);
}
