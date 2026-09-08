int countCommas(int n) {
    if(n<1000){
        return 0;
    }
    int count1 = 0,count2 = 0;
    count1 = n-999;
    if(n<10000){
        return count1;
    }
    if(n>9999 && n<=100000){
        count2 = n-9999;
        return count1;
    }
    return count1 + count2;
}