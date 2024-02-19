#include "sort.h"

void bubble_sort(int *array, size_t size) 
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1 ;j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[i];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}