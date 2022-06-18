#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet 10x
 *
 */

void print_alphabet_x10(void)
{
int new_line;
int alphabet;
for (new_line = 1; new_line <= 10; new_line++)
{
for (alphabet = 97; alphabet <= 122; alphabet++)
_putchar(new_line);
_putchar('\n');
}
}
