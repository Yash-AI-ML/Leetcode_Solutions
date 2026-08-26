int productofdigits(int n){
    int pro=1;
    while(n!=0){
        int rem = n%10;
        pro*=rem;
        n/=10;
    }
    return pro;
}
int smallestNumber(int n, int t) {
    while(productofdigits(n)%t!=0) n++;
    return n;
}