#include "holberton.h"

/**
* puts2 - prints every other character of a string, starting first character
* @str: pointer
* Return: 0
*/

void puts2(char *str)
{
	int counter = 0;

	while (*str)
	{
	if (counter++ % 2 == 0)
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
