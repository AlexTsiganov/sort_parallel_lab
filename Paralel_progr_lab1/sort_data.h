//
//  sort_data.h
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 25.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#ifndef sort_data_h
#define sort_data_h

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#pragma mark -
#pragma mark Data structs

typedef struct {
    int *a;
    size_t n;
} array_s;

array_s read_array_from_file(char *filePath);
array_s copy_array(array_s source);
void write_array_to_file(array_s a, char *filePath);
void print_array(array_s a);

#endif /* sort_data_h */
