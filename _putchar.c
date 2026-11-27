#include "main.h"

/**
 * _putchar - prints one character
 * @c: the character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
