#include "main.h"

/**
 *factorial-a function that returns the factorial of a given number.
 *@n:input number
 *Return: Always 0.
 */

int factorial(int n)
{
  f (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
