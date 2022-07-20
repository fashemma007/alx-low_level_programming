#include "main.h"
/**
 * _sqrt_recursion - finds the square root n
 * @n: number to find its root
 * Return: Returns square root
 */
int find_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if ((n > 0) && (i < n/2))
	{
		return (checker(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (checker(n, 1));
	}
	return (-1);
}
