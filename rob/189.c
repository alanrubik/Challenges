// 189. Rotate Array
//
// Given an array, rotate to the right by k steps, where k is
// non-negative.

void rightRotateByOne(int* nums, int numsSize);

void rotate(int* nums, int numsSize, int k){
    
    int i;
    
    for(i = 0; i < k; i++)
    {
        rightRotateByOne(nums, numsSize);
    }
}

void rightRotateByOne(int* nums, int numsSize)
{
    int last;
    int i;
    
    last = nums[numsSize - 1];
    
    // Remember, when iterating over arrays, you don't always have to start
    // from index 0, you can start from the last to the first element
    for(i = numsSize - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    
    nums[i] = last; // Store last element in the first position
}
 
