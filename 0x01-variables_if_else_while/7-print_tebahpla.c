#include <stdio.h>
/**
* main - entry point
* Descriptin: prints out the alphabet in lowercase
* in reverse
* Return: zero on sucess
*/
int main(void)
{
	char z = 'z';

	while (z  >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');


	return (0);
}
