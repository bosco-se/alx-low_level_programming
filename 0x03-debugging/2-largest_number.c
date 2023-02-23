#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest_number
 */

int largest_number(int a, int b, int c)
{
	if (a > b && a > c)
	{
		largest_number = a;
	}
	else if (a > b && c > a)
	{
		largest_number = c;
	}
	else if (b > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}
	return (largest_number);
}
