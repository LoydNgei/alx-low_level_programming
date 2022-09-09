#include <stdio.h>

/**
 * main - putchar alphabets
 * Return 0 (Always success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
