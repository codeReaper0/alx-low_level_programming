#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *  main - The variable n will store a different
 *	value every time you run this program and
 *  Return: Always 0
 */
int main(void)
{
	int n;
    int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    /* your code goes there */
    l = n % 10;
    printf("Last digit of %d is %d ", n, l);
    if (l > 5)
    {
        printf("and is greater than 5");
    }
    if (l == 0)
    {
        printf("and is 0");
    }
    if (l < 6 && l != 0)
    {
        printf("and is less than 6 and not 0");
    }

    printf("\n");

	return (0);
}
