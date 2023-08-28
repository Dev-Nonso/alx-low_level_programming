#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s:  pointer to a string
 * @c: a characte
 *
 * Return: return c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
