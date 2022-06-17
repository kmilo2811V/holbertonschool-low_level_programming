#include "main.h"
/**
*print_alphabet - funtion print alphabet
*Dcription: print
*Return: On success 1
*@void: print alphabet
*/

void print_alphabet(void)

{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
