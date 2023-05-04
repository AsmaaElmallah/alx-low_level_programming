#inclde "main.h"

/**
 * string_toupper - changes a11 lowercases letters of a string to uppercase
 * @str: paramter
 * Return: returns a character
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
