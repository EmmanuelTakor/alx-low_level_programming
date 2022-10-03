#include "main.h"
/**
 * print_square - prints straight line
 * @size:"number of times line should be printed"
 * Description: 'the program's description'
 *
* Return: Always 0 (Success)
 */

void print_square(int size)
{
if (size > 0)
{
int count;
int length;
for (count = 0; count < 4; count++)
{
for (length = 0; length <= size; length++)
{putchar('#'); }}}
putchar('\n'); }
