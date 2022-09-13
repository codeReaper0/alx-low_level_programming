#include "main.h"

/**
* prints the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}
