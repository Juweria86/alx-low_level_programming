#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints multiplication of two numbers
 * @argc: integer
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m1 = 0, m2 = 0;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}