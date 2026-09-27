bool isPowerOfTwo(int n) {
    long long ans = 1;//take long long due to integer overflow 
    if(n ==1){ 
        return true; //edge case
    }
    while(ans < n){
        ans*=2;
        if(ans == n){
            return true;
        }
    }
    return false;
}