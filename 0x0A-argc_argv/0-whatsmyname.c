#include <stdio.h>

/**
 * main - write aprogram that prints its name, followed by anew line.
 * if you rename the program, it will print the new name, without having to
 * compile it again
 * you should not remove the path befor the name of the programe
 *
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this return to 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
