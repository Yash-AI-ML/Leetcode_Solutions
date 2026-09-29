#include <stdlib.h>

// 1. Separate heapify function using 0-based indexing formulas
void heapify(int* arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;  // Correct formula for 0-based arrays
    int right = 2 * i + 2; // Correct formula for 0-based arrays

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

int* sortArray(int* arr, int size, int* returnSize) {
    *returnSize = size;
    if (size <= 0) return NULL;

    // 2. Malloc a new array as required by the problem description
    int* result = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        result[i] = arr[i];
    }

    // 3. Build the Max-Heap (Rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(result, size, i);
    }

    // 4. Extract elements from heap one by one (Heap Sort)
    for (int i = size - 1; i > 0; i--) {
        // Move current root to the end of the heap area
        int temp = result[0];
        result[0] = result[i];
        result[i] = temp;

        // Call heapify on the reduced heap
        heapify(result, i, 0);
    }

    return result;
}
