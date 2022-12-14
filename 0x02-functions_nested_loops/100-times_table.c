#include "main.h"
#include <stdio.h>
/**
*print_times_table -  function that prints the multiplication table
*@n: user value
*
*Return: number matrix
*/
void print_times_table(int n)
{
	int num, mul, prod;

	if (n >= 0 && n <= 14)
	{
		for (num = 0; num <= n; num++)
		{
			for (mul = 0; mul <= n; mul++)
			{
				prod = num * mul;
				if (prod > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					if (mul != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(prod + '0');
				}
				}
				_putchar('\n');
		}
	}
}
