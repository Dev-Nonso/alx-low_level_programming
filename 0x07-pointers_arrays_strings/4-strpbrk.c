#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s:  pointer to the byte
 * @accept: string to search in j
 *
 * Return: return accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *j = accept;

		while (*j != '\0')
		{
			if (*s == *j)
				return (s);
			j++;
		}
		s++;
	}
	return (NULL);
}
