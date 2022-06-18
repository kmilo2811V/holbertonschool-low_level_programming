#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i = 10;
int j;

for (i = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)

_putchar(j);
_putchar('\n');
}
}
