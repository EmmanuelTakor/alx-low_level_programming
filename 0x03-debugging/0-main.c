#include "main.h"
#include <time.h>
#include <stdio.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0); }

/**
 * positive_or_negative - Entry point
 *
 * Description: 'A calculations program'
 * @i:"This is a parameter"
 * Return: Always 0 (Success)
 */
int positive_or_negative(i)
{int n;
srand(time(0));
n = i
if (n > 0)
{printf("%d is positive\n", n); }
else if (n == 0)
{printf("%d is zero\n", n); }
else
{printf("%d is negative\n", n); }
return (0); }
