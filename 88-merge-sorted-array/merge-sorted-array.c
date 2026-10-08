void merge(int* nums1, int size1, int m, int* nums2, int size2, int n) {
    int i = 0;
    while(m < size1){
        nums1[m++] = nums2[i++];
    }
    for(int i=0; i<size1-1; i++){
        for(int j=0; j<size1-1; j++){
            if(nums1[j] > nums1[j+1]){
                int temp = nums1[j];
                nums1[j] = nums1[j+1];
                nums1[j+1] = temp;
            }
        }
    }
}