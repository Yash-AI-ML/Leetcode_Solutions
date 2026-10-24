bool isPalindrome(int x) {
    int n = x;
    if(x<0)return false;
    double rev = 0;
    while(n!=0){
        rev = rev*10 + n % 10;
        n/=10;
    }
    return(x==rev);
}