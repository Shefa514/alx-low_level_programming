#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: strings to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

		while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
