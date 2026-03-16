int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}


int minimumDifference(int* nums, int numsSize, int k) {
     qsort(nums, numsSize, sizeof(int), compare);
    int ans = INT_MAX, j = k - 1;
    for(int i = 0; i + j < numsSize; i++) {
        ans = fmin(ans, nums[i + j] - nums[i]);
    }
    return ans;
}

    