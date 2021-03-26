// 136. Single Number
//
// Given a non-empty array of integers nums, every element appears 
// twice except for one. Find that single one.


void deleteElement(int *nums, int numsSize, int elemPos);


int singleNumber(int *nums, int numsSize)
{
    int unique;
    int left = 0;
    int right = left + 1;

    for (;;)
    {
        if (nums[left] == nums[right])
        {
            deleteElement(nums, numsSize, right);
            numsSize -= 1;
            left++;

            if (left + 1 < numsSize - 1)
            {
                right = left + 1;
            }
            else
            {
                unique = nums[left];
                break;
            }
        }

        else
        {
            if (right + 1 >= numsSize)
            {
                unique = nums[left];
                break;
            }
            else
            {
                right++;
            }
        }
    }

    return (unique);
}

void deleteElement(int *nums, int numsSize, int elemPos)
{
    int i;

    if (elemPos >= numsSize + 1)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        for (i = elemPos; i < numsSize - 1; i++)
        {
            nums[i] = nums[i + 1];
        }
    }
}
 
