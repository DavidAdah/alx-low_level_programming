#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	while (count < 10)
	{
		for(alphabet = '0'; alpahbet <= '26'; alphabet++)
		{
			_putchar('a' + alphabet);
		}
		
		count++;
		_putchar('\n');
	}

}
