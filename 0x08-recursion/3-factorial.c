#include <stdio.h>
#include"main.h"
/**
 * factorial - function of a factorial of number
 *
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
