#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - A program that prints the positive or negative random numbers */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf(n "is positive \n");
	}
	else if(n = 0)
	{
		printf(n "is 0 \n");
	}
	else (n "is negative \n");
	return (0);
}
