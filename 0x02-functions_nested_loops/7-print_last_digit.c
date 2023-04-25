#include "main.h"
/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDegit
*/

int print_last_digit(int n)
{
	int lastDegit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDegit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
