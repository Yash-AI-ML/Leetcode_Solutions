/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *arr = (int*)calloc(numsSize,sizeof(int));
    *returnSize = numsSize;
    for(int i=0; i<numsSize; i++){
        for(int j=0; j<numsSize; j++){
            if(nums[j]<nums[i]){
                arr[i]++;
            }
        }
    }
    return arr;
}