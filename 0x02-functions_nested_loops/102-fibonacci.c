#include <stdio.h>
/**
*main -  prints the sum of all mul of 3 or 5 upto 1024
*Return: Always (success)
*/
int main(void)
{
int i = 0;
long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			prinf("%d", j);
		else if (i == 1)
			prinf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
