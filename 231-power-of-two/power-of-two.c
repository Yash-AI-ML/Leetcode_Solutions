bool isPowerOfTwo(int n) {
    long long ans = 1;
    if(n ==1){
        return true;
    }
    while(ans < n){
        ans*=2;
        if(ans == n){
            return true;
        }
    }
    return false;
}