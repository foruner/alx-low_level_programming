#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - it allocates memory using malloc
 * @b: no of bytes to allocate
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

