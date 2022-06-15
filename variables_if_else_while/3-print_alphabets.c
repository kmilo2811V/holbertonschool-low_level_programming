#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the vocabulary
 *
 *Return: return zero
 */

int main(void)
{
int abc = 'a';
int ABC = 'A';
while (abc <= 'z')
{
putchar(abc);
abc++;
}
while (ABC <= 'z')
{
putchar(ABC);
ABC++;
}
putchar('\n');
return (0);
}
