#include "main.h"

/* Functionto print a single digit*/
/**
 * print_digit - Entry
 * @digit:an integer
 * Description : 'Printing numbers'
 */
void print_digit(int digit)
{
	_putchar(digit + '0');
}

/* A function to print large numbers */
/**
 * print_large_number - Entry
 * @number : an integer
 * Description : 'Print large numbers'
 */
void print_large_number(int number)
{
	int digits[20];
	int num_digits = 0;
	int i;

	if (number < 0)
	{
		_putchar('-');
		/* Make the number positive*/
		number = -number;
	}
	/* Convert the number to individual digits */
	do
	{
		digits[num_digits] = number % 10;
		number /= 10;
		num_digits++;
	} while (number != 0);
	/*Print the digits in reverse order*/
	for (i = num_digits - 1; i >= 0; i--)
		print_digit(digits[i]);
}

/**
 * print_to_98 - '98 Battery Street'
 * @n : an integer
 * Description : 'Print all natural numbers to 98'
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		print_large_number(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		print_large_number(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	print_large_number(98);
	_putchar('\n');
}
