#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 *@n: input number.
 *Return: Always 0.
 */

int _sqrt_recursion(int n)
{
  if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
