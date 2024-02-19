#include "sort.h"


/**
* swapint - swaps index's of array
* @l: left or low index to swap
* @r: right or high index
*/

void swapint(int *l, int *r)
{
        int temp;

        temp = *l;
        *l = *r;
        *r = temp;
}

/**
* b_merge - bitonic merge
* @array: Array slice being merged
* @low: lowest index
* @count: Count of slice
* @dir: Direction, ascending 1 descending 0
* @size: size of total array for printing
*/

void b_merge(int *array, int low, int count, int dir, size_t size)
{
        int i, n;

        if (count > 1)
        {
                n = count / 2;
                for (i = low; i < low + n; i++)
                {
                        if (((array[i] > array[i + n]) && dir == 1) ||
                        (dir == 0 && (array[i] < array[i + n])))
                                swapint(&array[i], &array[i + n]);
                }
                b_merge(array, low, n, dir, size);
                b_merge(array, low + n, n, dir, size);
        }
}
