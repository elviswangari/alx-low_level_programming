
#include "main.h"
/**
* main - program starts here
* @argc: argument count
* @argv: pointer to the command line input
* Return: 0
*/
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc - 1 != 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
