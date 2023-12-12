#include "main.h"
/**
* _islower - function that check if c is lower character
*@c: parameter to be checked.
* Return: return i is if successful and 0 if not.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
