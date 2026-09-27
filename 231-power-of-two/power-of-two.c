bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;//every power of 2 number has one 1 in its binary form
}