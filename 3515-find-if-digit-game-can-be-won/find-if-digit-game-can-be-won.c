bool canAliceWin(int* nums, int size) {
    int alice =0;
    int bob = 0;
    for(int i =0;i<size;i++){
        if((nums[i]/10)!=0){
            alice+=nums[i];
        }
        else{
            bob+=nums[i];
        }
    }
    return alice!=bob;
}