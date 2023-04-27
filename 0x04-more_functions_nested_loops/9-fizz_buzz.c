#include <stdio.h>
/**
 * main - print numbers 1 - 100 followed by anew line
 * numbers that multibles of 3 print fizz
 * numbers that multibles of 5 print fizz
 * numbers that multibles of 3 and 5  print fizzbuzz
 * each number and world to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && (num % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d" . num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
