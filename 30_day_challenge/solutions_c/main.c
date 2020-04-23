#include "src/subarray_sum_equals_k.h"
#include <stdio.h>

int main() {
    printf("=== Subarray Sum Equals K ===\n");
    int numSize = 3;
    int* nums[3] = {1, 1, 1};
    int k = 2;
    int test_output = subarraySum(nums, numSize, k);
    printSubArraySumOutput(test_output);
    printf("=== === ===\n");
}
