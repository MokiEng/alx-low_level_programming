#include "main.h"
#include <stdio.h>
/**
*print_times_table -  function that prints the multiplication table
* @n: user value
*/
void print_times_table(int n)
{
	int num, mul, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mul;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 0)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 100) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
