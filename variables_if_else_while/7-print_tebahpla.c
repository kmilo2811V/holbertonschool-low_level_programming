#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - print the vocabulario
*Return: return zero
*/

int main(void)
{
char abc = 'z';
while (abc >= 'a')
{
putchar(abc);
(abc--);
}
putchar(10);
return (0);
}
