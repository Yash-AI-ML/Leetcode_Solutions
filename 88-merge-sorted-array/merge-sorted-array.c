void merge(int* arr, int size1, int m, int* nums2, int size2, int n) {
    int i = 0;
    while(m < size1){
        arr[m++] = nums2[i++];
    }
    for(int i=1; i<size1; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =key;
    }
}