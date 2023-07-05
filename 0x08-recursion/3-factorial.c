#include <stdio.h>
#include"main.h"
/**
 * _factorial - function of a factorial of number
 *
 * Return: 0 (success)
 */
int _factorial(int x)
{
	int n = 0;

	if (x < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
