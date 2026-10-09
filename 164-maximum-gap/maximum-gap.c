
void merge(int arr[],int low,int mid,int high){
        int temp[high-low+1];
        int i=low,j=mid+1,k=0;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
            }
        }
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=high){
            temp[k++] = arr[j++];
        }
        for(int i=low,k=0; i<=high; i++,k++){
            arr[i] = temp[k];
        }
    }
void mergesort(int arr[],int low,int high){
        if(low<high){
            int mid = low + (high-low)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
int maximumGap(int* arr, int size) {
    if(size<2){
        return 0;
    }

    mergesort(arr,0,size-1);
    int md = arr[size-1] - arr[size -2];
    for(int i=0 ;i<size-1; i++){
        if((arr[i+1]-arr[i])>md){
            md = arr[i+1]-arr[i];
        }
    }
    return md;
}