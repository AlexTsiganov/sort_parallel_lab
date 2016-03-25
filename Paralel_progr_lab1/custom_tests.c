//
//  custom_tests.c
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 26.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#include "custom_tests.h"


#pragma mark -
#pragma mark Test functions

/**
 ** Verification surce array data
 **
 */
void test1()
{
    array_s source = read_array_from_file(PATH_SOURCE_ARRAY_DATA);
    assert(&source);
    assert(source.n>0);
    assert(source.a[0]>0);
    printf("Verification surce array data: done\n");
}

/**
 ** Validate sort function
 **
 */
void test2()
{
    array_s sorted = read_array_from_file(PATH_SOURCE_ARRAY_DATA);
    array_s source = copy_array(sorted);
    select_sort(sorted.a, sorted.n);
    assert(sorted.n == source.n);
    for (size_t i=1; i<sorted.n; i++)
        assert(sorted.a[i] >= sorted.a[i-1]);
    printf("Validate sort function: done\n");
}

void test()
{
    test1();
    test2();
}