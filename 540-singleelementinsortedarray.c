/*
  You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears    exactly once. Find this single element that appears only once.
*/

int singleNonDuplicate(int* nums, int numsSize){
    
    if (numsSize == 1) return nums[0];
    for (int i = 0; i < numsSize - 1; i+=2)
    {
        if (nums[i] != nums[i + 1])
        {
            return nums[i];
        }
    }
    return nums[numsSize - 1];
}
