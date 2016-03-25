//
//  main.c
//  Paralel_progr_lab1
//
//  Created by Alex Tsiganov on 23.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#include <stdio.h>
#include "custom_tests.h"
#include "Config.h"
#include "sort.h"
#include "sort_data.h"
#include "mock_array_data.h"

#pragma mark -
#pragma mark Main functions

int main(int argc, const char * argv[])
{
#ifdef MOCK_DATA
    write_array_to_file(mock_array(MOCK_DATA_SIZE), PATH_SOURCE_ARRAY_DATA);
#endif
    
#ifdef USE_CUSTOM_TESTS
    test();
#else
    array_s a = read_array_from_file(PATH_SOURCE_ARRAY_DATA);
    //print_array(a);
    select_sort(a.a,a.n);
    printf("Sorted: done\n");
    //print_array(a);
    write_array_to_file(a, PATH_SORT_ARRAY_DATA);
    free(a.a);
#endif
    return 0;
}

