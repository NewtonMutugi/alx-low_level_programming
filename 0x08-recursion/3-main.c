//#include "main.h"
#include <stdio.h>

double factorial(double n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    double r;

    r = factorial(1);
    printf("%lf\n", r);
    r = factorial(5);
    printf("%lf\n", r);
    r = factorial(4000);
    printf("%lf\n", r);
    r = factorial(-1024);
    printf("%lf\n", r);
    return (0);
}
