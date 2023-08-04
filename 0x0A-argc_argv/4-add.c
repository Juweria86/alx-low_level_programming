#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * add_positive_numbers -adds positive numbers
 * @argc: integer
 * @argv: pointer
 * Return: result
 */
int add_positive_numbers(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	return (result);
}
/**
 * main -checks program
 * @argc: integer
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int sum_result = add_positive_numbers(argc, argv);

		printf("%d\n", sum_result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
