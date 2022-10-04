#include <stdio.h>
#include "main.h"
/**
* alloc_grid - writes character vc to stdout
* @width:"This is a parameter"
* @height:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int **alloc_grid(int width, int height)
{int **array;
int i = 0, j;
if (width == 0 || height == 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)
{ array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (j = 0; j < width; j++)
array[i][j] = 0; }
else
{
while (i >= 0)
{ free(array[i]);
i--; }
free(array);
return (NULL); }}
return (array); }
else
{ return (NULL); }}
