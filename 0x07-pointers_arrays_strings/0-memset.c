#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area we want to fill
 * @b: the constant byte we want to fill the memory with
 * @n: number of bytes we want to fill.
 *
 * Return: the pointer *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
