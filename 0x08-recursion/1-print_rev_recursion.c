#include<stdio.h>
#include"main.h"
/**
 * _print_rev_recursion - print string in reverse
 *@s: the string to be printed
 * Return: 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

