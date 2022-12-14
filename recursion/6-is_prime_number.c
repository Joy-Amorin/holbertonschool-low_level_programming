#include "main.h"

/**
  * prime - identify prime number
  * @x: number to evaluate.
  * @y: prime number
  *
  * Return: 1 if x is a prime number, otherwise return 0.
  */

int prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}

/**
  * is_prime_number - find if n is a primer number.
  * @n: Integer to evaluate.
  *
  * Return: 1 if n is a prime number, otherwise return 0.
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
