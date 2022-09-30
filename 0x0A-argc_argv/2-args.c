#include "main.h"

/**
* main - program starts here
* @argc: argument count
* @argv: pointer o the command line inputs
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
