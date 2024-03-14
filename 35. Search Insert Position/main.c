#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the target is not found, return the index where it would be inserted
    // in order.
    if (low == numsSize) {
        return numsSize;
    } else {
        return low;
    }
}