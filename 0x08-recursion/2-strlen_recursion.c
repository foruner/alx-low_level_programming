#include<stdio.h>
#include"main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: the length of the string
 *
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
