#include <stdio.h>
/**
 * main - Entry point
 * A program to print various sizes of computer types
 * Return: Always 0 (success)
 */
int main(void)

{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("size of an long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

