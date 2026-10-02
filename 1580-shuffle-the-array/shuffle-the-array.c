

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int j = 0;

    for(int i = 0; i < n; i++) {
        ans[j++] = nums[i];
        ans[j++] = nums[i + n];

    }
    return ans;
}