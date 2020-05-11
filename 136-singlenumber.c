/*
  Given a non-empty array of integers, every element appears twice except for one. Find that single one.

  Note:

  Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

int singleNumber(int* nums, int numsSize){
    int xor_result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        xor_result ^= nums[i];
    }
    return xor_result;
}
