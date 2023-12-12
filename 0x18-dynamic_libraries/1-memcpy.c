#include "main.h"
/**
 * _memcpy - function is used to copy a specified number
 * of bytes from one memory area
 * @dest: the destination memory area where we want to copy the data
 * @src: the source memory area from where we want to copy the data
 * @n: number of bytes we want to copy.
 *
 * Return: return dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
