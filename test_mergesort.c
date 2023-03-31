#include <stdio.h>
#include "unity.h"

#include "mergesort.h"

void setUp(void) {
    // set stuff up here or leave blank
}
void tearDown(void) {
    // clean stuff up here or leave blank
}

void test_mergesort_1() {
    int arr[] = { 5, 1, 3, 6, 4, 2 };
    int expected[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

    for (int i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

void test_mergesort_2() {
    int arr[] = { 100,201,52,3223,24,55,623,75,8523,-9,150 };
    int expected[] = { -9,24,52,55,75,100,150,201,623,3223,8523 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortIntegers(arr, n);

    for (int i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(expected[i], arr[i]);
    }
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_mergesort_1);
    RUN_TEST(test_mergesort_2);
    UNITY_END();

    return 0;
}

