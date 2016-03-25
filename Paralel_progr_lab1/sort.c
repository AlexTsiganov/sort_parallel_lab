//
//  sort.c
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 25.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#include "sort.h"

#pragma mark -
#pragma mark Sort functions

void insert_sort(int *a, size_t n)
{
    size_t i, j;
    int value;
    
    for(i = 1; i < n; i++)
    {
        value = a[i];
        for (j = i - 1; (int)j >= 0 && a[j] > value; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = value;
    }
}

void select_sort(int *a, size_t n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        /* устанавливаем начальное значение минимального индекса */
        size_t min_i = i;
        /* находим индекс минимального элемента */
        for (size_t j = i + 1; j < n; j++) {
            if (a[j] < a[min_i])
                min_i = j;
        }
        /* меняем значения местами */
        int temp = a[i];
        a[i] = a[min_i];
        a[min_i] = temp;
    }
}
