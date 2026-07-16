#include <stdio.h>
/**
* main - entry point
* Descriptin: prints out the alphabet in lowercase
* Return: zero on sucess
*/
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');


	return (0);
}
