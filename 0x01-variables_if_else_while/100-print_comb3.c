#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;
	num1 = 48;
	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			putchar (num1);
			putchar (num2);
			num2++;
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
