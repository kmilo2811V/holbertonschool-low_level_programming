#include "main.h"
 /**
  * swaps the values of two integers.
  * @a: pointer to int input
  * @b: pointer to int input
  * Return: void function
  */
void swap_int(int *a, int *b)
{
int kml;

kml = *a;
*a = *b;
*b = kml;
}
