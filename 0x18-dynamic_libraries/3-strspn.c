#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer pointing to the string
 * @accept:  the string containing the characters
 *
 * Return: return length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}
