#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - links a letter to its print function
 * @letter: the letter after the '%'
 * @print_func: the function that prints it
 */
typedef struct specifier
{
	char letter;
	int (*print_func)(va_list *args);
} specifier_t;

int _putchar(char c);
int print_char(va_list *args);
int print_string(va_list *args);
int print_percent(va_list *args);
int _printf(const char *format, ...);
int call_print_func(char letter, va_list *args);
int print_int(va_list *args);

#endif
