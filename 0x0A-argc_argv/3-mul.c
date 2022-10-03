#include "main.h"
/**
* main - program starts here
* @argc: argument count
* @argv: pointer to the command line input
* Return: 0
*/
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
