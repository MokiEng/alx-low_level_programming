#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
/*betty style doc for function main goes there */
int main(void)
{
char c;

int d;

c = 'a';
d = 0;
while
(d < 10)
{
putchar(d + '0');
d++;
}
while
(c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
