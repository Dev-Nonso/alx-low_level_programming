#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int str_i = 0;

	while (*s != '\0')
	{
		str_i++;
		s++;
	}

	return (str_i);
}
