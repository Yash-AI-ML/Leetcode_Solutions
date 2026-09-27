int removeElement(int* arr, int size, int val) {
    if(size == 0){
        return 0;
    }
    if(size==1 && arr[0]==val){
        return 0;
    }
    if(size==1 && arr[0]!=val){
        return 1;
    }
    int st = 0;
    int end = size-1;
    while (st<=end){
        while(st<=end && arr[end]== val){
            end--;
        }
        if(st>end){
            break;
        }
        if(arr[st]==val){
            int temp = arr[st];
            arr[st] = arr[end];
            arr[end] = temp;
            end --;
        }
        st++;
    }
    return st;
}