int* searchRange(int* nums, int size, int target, int* returnSize) {
    int first = -1, last = -1;

    int st = 0, end = size - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    int st1 = 0, end1 = size - 1;

    while (st1 <= end1) {
        int mid = st1 + (end1 - st1) / 2;

        if (nums[mid] == target) {
            last = mid;
            st1 = mid + 1;
        }
        else if (nums[mid] < target) {
            st1 = mid + 1;
        }
        else {
            end1 = mid - 1;
        }
    }

    int *result = malloc(2 * sizeof(int));

    result[0] = first;
    result[1] = last;

    *returnSize = 2;

    return result;
}