//
//  sort_data.c
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 25.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#include "sort_data.h"

#pragma mark -
#pragma mark Read\Write file functions

size_t file_number_lines(char *filePath)
{
    FILE *file = fopen(filePath, "r");
    assert(file);
    int buf;
    size_t size = 0;
    while(fscanf(file, "%d", &buf) > 0 )
        size++;
    return size;
}

void write_array_to_file(array_s a, char *filePath)
{
    FILE *file = fopen(filePath, "w");
    assert(file);
    for (size_t i=0; i<a.n; i++)
        fprintf(file, "%d\n", a.a[i]);
    fclose(file);
}

array_s read_array_from_file(char *filePath)
{
    FILE *file = fopen(filePath, "r");
    assert(file);
    size_t count = file_number_lines(filePath);
    array_s a = {.a = malloc(count*sizeof(int)), .n= count};
    
    int i=0;
    int num;
    while(fscanf(file, "%d", &num) > 0)
        a.a[i++] = num;
    fclose(file);
    return a;
}

array_s copy_array(array_s source)
{
    array_s copy = {.a = malloc(source.n*sizeof(int)), .n= source.n};
    for (size_t i=0; i<source.n; i++)
        copy.a[i] = source.a[i];
    return copy;
}

#pragma mark -
#pragma mark Print functions

void print_array(array_s a)
{
    for (size_t i=0; i<a.n; i++)
        printf("[%zu]=%d\n",i, a.a[i]);
}