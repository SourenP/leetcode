#include "subarray_sum_equals_k.h"

// int subarraySum(int* nums, int numsSize, int k) {
//     int count = 0;
//     for (int start = 0; start < numsSize; start++) {
//         for (int end = start; end < numsSize; end++) {
//             if (arraySum(nums, numsSize, start, end) == k) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int arraySum(int* nums, int numsSize, int start, int end) {
//     int sum = 0;
//     for (int i = start; i <= end; i++) {
//         sum += nums[i];
//     }
//     return sum;
// }

int subarraySum(int* nums, int numSize, int k) {
    int count = 0;
    int lvl_zero[numSize];
    int lvl_last[numSize];
    int lvl_curr[numSize];

    int* lvl_zero_p = lvl_zero;
    int* lvl_last_p = lvl_last;
    int* lvl_curr_p = lvl_curr;

    for (int l = 0; l < numSize; l++) {
        for (int i = 0; i < numSize - l; i++) {
            int sum;
            if (l == 0) {
                sum = nums[i];
                lvl_zero_p[i] = sum;
            } else {
                if (i + 1 >= numSize) {
                    continue;
                }
                sum = lvl_last_p[i] + lvl_zero_p[i + l];
                lvl_curr_p[i] = sum;
            }
            if (sum == k) {
                count++;
            }
        }
        if (l == 0) {
            lvl_last_p = lvl_zero_p;
        } else {
            lvl_last_p = lvl_curr;
        }
    }
    return count;
}

void printSubArraySumOutput(int output) {
    printf("%d\n", output);
}
