#include "main.h"
/**
 * swap_int - swaps parameters
 * @a:"a p-arameter"
 * @b:"a p-arameter"
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
a = 98;
b = 42;
*a = &b;
*b = &a; }
