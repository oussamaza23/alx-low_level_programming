#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	write(1,&c,1);
}
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if(s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}	
} 
