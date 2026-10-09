int missingNumber(int* arr, int n) {
    long long expected = (long long)n * (n + 1) / 2;
    long long actual = 0;

    for (int i = 0; i < n; i++) {
        actual += arr[i];
    }

    return (int)(expected - actual);
}