#include "main.h"

/**
* main - program starts here
* @argc: argument count
* @argv: pointer to the command line input
* Return: 0
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}

