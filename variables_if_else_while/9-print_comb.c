#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - print the vocabulary
 *
 * Return: 0
 */

int main(void)
{
int i;
for (i = 48 ; i <= 57 ; i++)
{
putchar(i);
if (i != 57)
putchar(',');
if (i <= 56)
putchar(' ');
}
{
putchar('\n');
}
