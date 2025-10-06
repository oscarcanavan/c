/*
Author: Oscar Canavan
Date: 02/08/2025
Program description: Bubble Sort algorithm
*/

#include <stdio.h>

void swap(int *arr, int i, int j);

int main()
{
    int arr[] = {1, 5, 7, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n%d array elements\n\n", n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // swap if left element greater than right
            {
                swap(arr, j, j + 1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
        if (i < n -1) 
        {
            printf(",");
        } 
        else
        {
            printf("\n");
        }
    }
    return 0;
} // end main()
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

} // end swap()
