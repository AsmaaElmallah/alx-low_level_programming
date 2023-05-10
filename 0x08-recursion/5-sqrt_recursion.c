#include "main.h"
/**
 * helperfunction - checks if sqrt of number exists
 * @num: number.
 * @psqrt: possible sqrt of number.
 *
 * Returns: sqrt of number ot -1 for error.
*/
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recrion - returns the natural square root of a number.
 * @n: number to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have anatural sqrt.
*/
int _sqrt_recrion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
