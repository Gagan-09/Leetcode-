int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return numsSize; // No duplicates
    }

    int k = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            k++;
            nums[k] = nums[i + 1];
        }
    }

    return k + 1; 

}