//
//  mock_array_data.c
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 26.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#include "mock_array_data.h"


#pragma mark -
#pragma mark Mock data functions

array_s mock_array(size_t count)
{
    array_s a = {.a = malloc(count*sizeof(int)), .n= count};
    for (size_t i=0; i<count; i++)
        a.a[i] = rand()%1000;
    return a;
}