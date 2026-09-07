int maxProduct(int* nums, int size) {
    int max_pro = 0;
    for (int i = 0;i<size ;i++){
        for (int j = i +1 ;j<size ;j++){
            int product = (nums[i]-1)*(nums[j]-1);
            if(product >max_pro){
               max_pro = product;
        }
    }
    }
    return max_pro;
}