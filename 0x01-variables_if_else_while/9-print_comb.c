#include <stdio.h>
/**
* main - program starts here
*
* Description: prints base 10 numbers
* followd by comma and space
* Return: zero on success
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}

