int pivotIndex(int* nums, int size) {
    int sum =0;
    for(int i=0;i<size;i++){
        sum += nums[i];
    }
    int ls =0;
    for(int i=0; i<size; i++){
        int rs = sum -nums[i] -ls;
        if(ls == rs)return i;
        else{
            ls += nums[i];
        }
    }
    return -1;
}