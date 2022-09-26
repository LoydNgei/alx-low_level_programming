#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @c: character in the string c where pointer is returned
 * @s: string where c is returned
 * Return: a pointer to the first occurrence of the character
 * c in te string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
