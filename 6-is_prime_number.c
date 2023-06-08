#include "main.h"
/**
 *is_prime_number-a function that returns 1 if the input integer is a prime number, otherwise return 0.
 *@n:input number
 *Return: Always 0.
 */

int is_prime_number(int n)
{
  if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
