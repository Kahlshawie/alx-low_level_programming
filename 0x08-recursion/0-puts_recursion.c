#include "holberton.h"
/**
  * _puts_recursion - recurssion of string
  * @s: string to print
  *
  *
  *
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
