struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize == 0) {
        return NULL;
    }
    
    // Find the middle element of the array
    int mid = numsSize / 2;
    
    // Create the current node with the middle element
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    
    // Recursively create the left subtree
    root->left = sortedArrayToBST(nums, mid);
    
    // Recursively create the right subtree
    root->right = sortedArrayToBST(nums + mid + 1, numsSize - (mid + 1));
    
    return root;
}
