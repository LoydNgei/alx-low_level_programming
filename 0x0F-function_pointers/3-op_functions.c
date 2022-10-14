#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: The first integer
 * @b: The seconfd integer
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The product of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The result of division of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The remainder of the division of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
