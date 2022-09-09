#include <stdio.h>
/**
 *  main - prints the alphabet in lowercase, followed by a new line
 *	Print all the letters except q and e
 *  Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e') 
			putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
