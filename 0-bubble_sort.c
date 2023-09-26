#include "sort.h"
                                                           /**
 * main - Entry point                                       *
 * Return: Always 0 (successful)
 */
void bubble_sort(int *array, size_t size)                  {                                                                  int i, j;
        for (i = 0; i < n - 1; i++)
        {
                for (j = 0; j < n - i - 1; j++)                            {
                        if (arr[j] > arr[j + 1])                                   {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp
                        }
                }                                                  }                                                  }                                                          int main()                                                 {
        int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};                  int n = sizeof(arr) / sizeof(arr[0]);                      bubble_sort(arr, n);                                       printf("Sorted array: ");                                  for (int i = 0; i < n; i++)                                {                                                                  printf("%d ", arr[i]);                             }
        return 0;
