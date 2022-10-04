#include <stdio.h>
#include "main.h"
/**
* free_grid - writes character vc to stdout
* @grid:"This is a parameter"
* @height:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void free_grid(int **grid, int height)
{ int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid); }
