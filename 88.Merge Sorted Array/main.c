void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = 0; // iterator for nums1
    int j = 0; // iterator for nums2
    int k = 0; // iterator for result array
    
    // create a new array to store the merged elements
    int* result = (int*)malloc((m + n) * sizeof(int));
    
    // merge the two arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }
    
    // add the remaining elements from nums1
    while (i < m) {
        result[k++] = nums1[i++];
    }
    
    // add the remaining elements from nums2
    while (j < n) {
        result[k++] = nums2[j++];
    }
    
    // store the merged array in nums1
    for (int i = 0; i < m + n; i++) {
        nums1[i] = result[i];
    }
}
