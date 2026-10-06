/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int size, int* returnSize) {
    int *arr = (int*)malloc(2*size*sizeof(int));
    *returnSize = 2*size;
    int i =0;
    for( i; i<size; i++){
        arr[i] = nums[i];
    }
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("%d is value of index of arr",i);
    int end = size-1;
    while(end >=0){
        arr[i] = nums[end];
        end--;
        i++;
    }
    return arr;
}