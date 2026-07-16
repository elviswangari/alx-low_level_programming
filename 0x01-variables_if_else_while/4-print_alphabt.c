#include <stdio.h>
/**
* main - entry point
* Descriptin: prints out the alphabet in lowercase
* skips q and e
* Return: zero on sucess
*/
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}

	putchar('\n');


	return (0);
}
