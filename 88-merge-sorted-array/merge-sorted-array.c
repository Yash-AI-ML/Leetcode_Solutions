void merge(int* arr, int size1, int m, int* nums2, int size2, int n) {
    int i = 0;
    while(m < size1){
        arr[m++] = nums2[i++];
    }
    for(int i=0; i<size1-1; i++){
        int min = i;
        for(int j = i+1; j<size1; j++) {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
    }
}