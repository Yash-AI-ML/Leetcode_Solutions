int getLeastFrequentDigit(int n) {
    int num = n;
    int freq[10] = {0};
    int count =0;
    while (n!=0){
        count ++;
        int digit = n%10;
        freq[digit]++;
        n /= 10;
    }
    int min = count;
    for(int i=0; i<10; i++){
        if(freq[i] != 0 && freq[i]<min ){
            min = freq[i];
        }
    }
    for(int i=0; i<10; i++){
        if(freq[i]==min){
            return i;
        }
    }
    return -1;
}