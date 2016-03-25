//
//  sort_lab_1.m
//  sort_lab_1
//
//  Created by Alex Tsiganov on 23.03.16.
//  Copyright © 2016 Politech. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "sort.h"
#include "sort_data.h"
#include "mock_array_data.h"

@interface Test_sort_functions : XCTestCase
{
    array_s mSource;
    array_s mSorted;
}

@end

@implementation Test_sort_functions

- (void)setUp
{
    [super setUp];
    mSource = mock_array(100000);
    mSorted = copy_array(mSource);
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    free(mSorted.a);
    free(mSource.a);
    [super tearDown];
}

-(void) testSortFunctions
{
    
}

- (void)testSortedArray
{
    select_sort(mSorted.a, mSorted.n);
    for (size_t i=1; i<mSorted.n; i++)
        XCTAssertGreaterThanOrEqual(mSorted.a[i], mSorted.a[i-1]);
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

//- (void)testPerformanceExample {
//    // This is an example of a performance test case.
//    [self measureBlock:^{
//        // Put the code you want to measure the time of here.
//    }];
//}

@end
