#include "main.h"
/**
 * _strlen_recurion - returns lenght of string.
 * @s: pointer to string.
 *
 * Return: lenght of string.
*/
int _strlen_recurion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
				}
				else
				{
				return (0);
				}
				}
