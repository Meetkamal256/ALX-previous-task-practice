#include "main.h"
#include <stdio.h>

/**
 * a function that returns the value of x raised to the power of y.
 * If y is lower than 0, the function should return -1
 * @x: number value
 * @y:power value
 * return x^y
 */

    
    
    int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    return (x * _pow_recursion(x, y-1 ));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
