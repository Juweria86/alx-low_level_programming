#include <stdio.h>
/**
 *main -prints number of args
 * @argc: integer
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
