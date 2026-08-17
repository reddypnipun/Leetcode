// Last updated: 8/17/2026, 4:07:22 PM
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* k = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                k[0] = i;
                k[1] = j;
                *returnSize = 2;
                break;
            }
        }
    }
    return k;
}