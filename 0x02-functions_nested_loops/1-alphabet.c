#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * return: 0 for success
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
