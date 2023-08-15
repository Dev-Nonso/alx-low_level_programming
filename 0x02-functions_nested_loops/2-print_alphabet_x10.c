#include "main.h"
/**
* print_alphabet_x10 - function to print alphabet into 10 places
*
* Return: return 0 if successful.
*/
void print_alphabet_x10(void)
{
	int i, j;
	char alphabet = 'a';


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alphabet);
			alphabet++;
		}
		alphabet = 'a';
		_putchar('\n');
	}
}
