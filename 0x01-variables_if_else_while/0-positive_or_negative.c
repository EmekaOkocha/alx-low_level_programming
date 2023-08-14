#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - A program that prints the sign of n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d" n, "is positive");
	}
	else if(n = 0)
        {
                printf("%d" n, "is zero");
        }
	else
	       {	printf("%d" n, "is positive");
	       }
	return 0;
}
