i#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the last digits
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d last digit of", n "is", n "and is greater than 5\n")
	else if (n == 0)
                printf("%d last digit of", n "is", n "and is 0\n")
	else printf("%d last digit of", n "is", n "and is less than 6 and not 0\n")
			return (0);
}
