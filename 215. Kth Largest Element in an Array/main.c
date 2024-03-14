#include <stdio.h>
#include <stdlib.h>

int findKthLargest(int* nums, int numsSize, int k) {
    if (k > numsSize) {
        return INT_MIN;
    }
    
    int i = 0, j = numsSize - 1;
    while (i < j) {
        // partition the array around the middle element
        int mid = (i + j) / 2;
        int tmp = nums[mid];
        nums[mid] = nums[j];
        nums[j] = tmp;
        
        // move the pivot to the right position
        i++;
        while (i < j && nums[i] > tmp) {
            i++;
        }
        j--;
        while (i < j && nums[j] < tmp) {
            j--;
        }
    }
    
    return nums[k - 1];
}