#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
/*betty style doc for function main goes there */
int main(void)
{

int ones = '0';

int tens = '0';

for (tens = '0'; tens <= '0'; tens++)
{
for (ones = '0'; ones <= '0'; ones++)
{
if (!((ones == tens) || (ones > tens)))
{
putchar(tens);
putchar(ones);
if (!(ones == '0' && tens == '0'))

{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
