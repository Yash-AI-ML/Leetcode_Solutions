int smallestIndex(int* arr, int size) {
    int rem = 0;
    for(int i = 0;i<size;i++){
        int temp = arr[i];
        int sum = 0;
        while(temp!=0){
            int rem=temp%10;
            sum+= rem;
            temp/= 10;
        }
    if(sum==i){
        return i;
    }
}
    return -1;}
