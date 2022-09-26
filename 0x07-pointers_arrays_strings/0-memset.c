#include "main.h"

/**
 * *_memset - function that  fills memory same byte
 * @s: pointer to s
 * @b: byte to be filled
 * @n: amount of  fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
