#include "main.h"
/**
 * _puts_recursion - function that put a character
 * @b: input
 * Return: Always 0 on success
 */

void _puts_recursion(char *b)
{
	if (*b)
	{
		_putchar(*b);
		_puts_recursion(b + 1);
	}
	else
		_putchar('\n')
}
