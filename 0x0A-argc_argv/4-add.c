#include "main.h"

/**
* main - program starts here
*
* @argc: argument count
*
* @argv: character inputs from users
*
* Return: 0 on success and 1 on error
*/
int main(int argc, char *argv[])
{
	int sum, count, i;

	count = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
