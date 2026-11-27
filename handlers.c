
#include "main.h"
#include <stddef.h>

/**
 * print_char - Prints a character
 * @args: Pointer to the arguments list
 *
 * Return: 1 if successful
 */
int print_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	write(1, &c, 1);

	return (1);
}

/**
 * print_string - Prints a string
 * @args: Pointer to the arguments list
 *
 * Return: Number of characters printed
 */
int print_string(va_list *args)
{
	char *str;
	int i;

	str = va_arg(*args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}

/**
 * print_percent - Prints the percent symbol
 * @args: Pointer to the arguments list
 *
 * Return: 1 if successful
 */
int print_percent(va_list *args)
{
	(void)args;
	write(1, "%", 1);

	return (1);
}
