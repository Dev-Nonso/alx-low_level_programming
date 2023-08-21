
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int str_i = 0;
	int j;

	while (*s != '\0')
	{
		str_i++;
		s++;
	}
	s--;
	for (j = str_i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

