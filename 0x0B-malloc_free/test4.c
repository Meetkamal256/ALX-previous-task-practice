#include <stdlib.h>
#include <stdio.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height);
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}

int **alloc_grid(int width, int height)
{
    int **array;
    int i, j;
    if (height <= 0 || width <= 0)
    {
        return NULL;
    }
    if (array == NULL)
    {
        return NULL;
    }
    /* Allocate space for height and width of our 2-D array in the heap memory*/
    array = (int **)malloc(i * sizeof(int *) * height);
    for (int i = 0; i < height; i++)
    {
        array[i] = malloc(j * sizeof(int) * width);
        {
            /* free the memory and return NUll if function fails */
            if (array[i] == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    free(array[j]);
                    free(array);
                    return NULL;
                }
            }
        }
    }
    /*initialize each element of the 2d array to zero*/
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            array[i][j] = 0;
        }
    }
    return (array);
}