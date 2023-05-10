#include "main.h"
/**
 * _strlen_recurion - returns lenght of string.
 * @s: pointer to string.
 *
 * Return: lenght of string.
*/

int _strlen_recurion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
		return (ntr);
				}
