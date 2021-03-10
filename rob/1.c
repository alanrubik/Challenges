// 1. Two Sum
// 
// Given an array of integers nums and an integer target, return indices of the
// two numbers such that they add up to target.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int current;
    int next;
    int* indices = (int*)malloc(2*sizeof(int));
    
    *returnSize = 2;
    
    for(current = 0; current < numsSize; current++)
    {
        for(next = current + 1; next < numsSize; next++)
        {
            if(nums[current] + nums[next] == target)
            {
                indices[0] = current;
                indices[1] = next;
            }
        }
    }
    
    return indices;
}
