#include "main.h"
#include <stdio.h>

/**
 *_abs - function that return a absolute valor
 *@number_absolute: number absolute
 *Return: return the valor absolute of a number
 */
int _abs(int number_absolute)
{
	if (number_absolute < 0)
	{
		return (number_absolute * -1);
	}
	return (number_absolute);
}
