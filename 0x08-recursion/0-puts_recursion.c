#include<stdio.h>
#include"main.h"

/**
 * _puts_putchar - function like puts
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		putchar('\n');
			return;
	}
	putchar(*str);
	_puts_recursion(str + 1);
}
