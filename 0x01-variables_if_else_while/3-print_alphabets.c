#include <stdio.h>
/**
* main - entry point
* Descriptin: prints out the alphabet in lowercase
* then uppercase
* Return: zero on sucess
*/
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');


	return (0);
}
