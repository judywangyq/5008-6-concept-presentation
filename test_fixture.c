#include <stdio.h>
//#include "unity.h"
#include "unity_fixture.h"

#include "mergesort.h"

void setUp(void) {
    // set stuff up here or leave blank
}
void tearDown(void) {
    // clean stuff up here or leave blank
}

TEST_GROUP(mergesort);

TEST_SETUP(mergesort) {
    // setup for the test fixture
}

TEST_TEAR_DOWN(mergesort) {
   // tear down for the test fixture
}


void test_mergesort_1(mergesort, sortIntegers) {
    int arr[] = { 5, 1, 3, 6, 4, 2 };
    int expected[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);
	
	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_2() {
    int arr[] = { 100,201,52,3223,24,55,623,75,8523,-9,150 };
    int expected[] = { -9,24,52,55,75,100,150,201,623,3223,8523 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_3() {
    int arr[] = { -1,1,2,-3,4,5,-6,7,8,-9,10 };
    int expected[] = { -9,-6,-3,-1,1,2,4,5,7,8,10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_4() {
    int arr[] = { 2,1,1,1,1,1,1,1,1,1,1 };
    int expected[] = { 1,1,1,1,1,1,1,1,1,1,2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_5() {
    int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
    int expected[] = { 0,1,2,3,4,5,6,-24,8,9,10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_6(mergesort, sortIntegers) {
    int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
    int expected[] = { 0,1,2,3,4,5,6,7,8,9,9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

	int i;
    for (i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

TEST_GROUP_RUNNER(mergesort) {
    RUN_TEST_CASE(mergesort, sortIntegers);
    RUN_TEST_CASE(mergesort, sortIntegers);
}

static void runAllTests(void) {
    RUN_TEST_GROUP(mergesort);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST_GROUP(mergesort);
    return UNITY_END();
	//return UnityMain(argc, argv, runAllTests);
}
