#include "main.h"

/**
 * call_print_func - calls the print function that matches a letter
 * @letter: the letter after the '%'
 * @args: the list of arguments
 *
 * Return: number of characters printed
 */
int call_print_func(char letter, va_list *args)
{
	if (letter == 'c')
		return (print_char(args));
	if (letter == 's')
		return (print_string(args));
	if (letter == '%')
		return (print_percent(args));

	_putchar('%');
	_putchar(letter);
	return (2);
}

/**
 * _printf - prints text according to a format
 * @format: the text to print, with conversion specifiers
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		else
		{
			i++;
			count += call_print_func(format[i], &args);
		}
	}
	va_end(args);
	return (count);
}
