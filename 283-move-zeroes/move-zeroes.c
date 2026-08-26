void moveZeroes(int* nums, int size) {
    int nonzero = 0;
    for(int i = 0;i<size;i++){
        if(nums[i]!=0){
          nums[nonzero]= nums[i];
          nonzero++;
        }
    }
        for(int i = nonzero;i<size;i++){
            nums[i]=0;
        }
}