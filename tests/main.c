#include <stdio.h>
#include "../main.h"

/**
 * main - compares _printf with the real printf (task 0)
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *empty;

	empty = NULL;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Return: %d %d\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Return: %d %d\n", len, len2);
	len = _printf("String:[%s] [%s]\n", "I am a string !", empty);
	len2 = printf("String:[%s] [%s]\n", "I am a string !", empty);
	printf("Return: %d %d\n", len, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Return: %d %d\n", len, len2);
	return (0);
}
