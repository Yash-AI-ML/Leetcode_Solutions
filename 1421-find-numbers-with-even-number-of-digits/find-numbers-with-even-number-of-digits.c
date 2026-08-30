int findNumbers(int* nums, int numsSize) {
    int even = 0,count = 0;
    for(int i = 0;i<numsSize;i++){
        while(nums[i]!=0){
            count ++;
            nums[i]/=10;
        }
        if(count % 2==0){
            even++;
        }
        count =0;

    }
    return even;
}