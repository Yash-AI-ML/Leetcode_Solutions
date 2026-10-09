int missingNumber(int* nums, int numsSize)
{
    int sum = 0;
    int i;

    for (i = 0; i <= numsSize; i++)
    {
        sum = sum + i;
    }

    for (i = 0; i < numsSize; i++)
    {
        sum = sum - nums[i];
    }

    return sum;
}