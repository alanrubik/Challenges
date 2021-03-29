// 136. Single Number
//
// Given a non-empty array of integers nums, every element appears 
// twice except for one. Find that single one.


#include <stdbool.h>


// Solution - List Operation
//
// Algorithm:
// 1. Iterate over all the elements in nums
// 2. If some number in nums is new to array, append it
// 3. If some number is already in the array, remove it

int valueInArray(int* array, int arraySize, int value);
void deleteElement(int* array, int arraySize, int pos);

int singleNumber(int* nums, int numsSize){
    
    int i;
    int j = 0;
    int pos;
    bool isInArray = false;
    int* seen = (int*)malloc(numsSize * sizeof(int));
    
    // Iterate over all the elements of nums
    for(i = 0; i < numsSize; i++)
    {
        isInArray = valueInArray(seen, numsSize, nums[i]);
        printf("is in array = %d", isInArray);
        
        if(isInArray)   // If some number in nums is new to array (seen), append it
        {
            seen[j] = nums[i];
            j++;
        }
        else    // If some number is already in the array, remove it
        {
            //deleteElement(seen, numsSize, pos);   
        }
    }
    
    // Print array values
    for(i = 0; i < numsSize; i++)
    {   
        printf("%d\n", seen[i]);        
    }
       
    return seen[0];
}


int valueInArray(int* array, int arraySize, int value)
{
    int i;
    bool isInArray = false;
    
    for(i = 0; i < arraySize - 1; i++)
    {
        if(value == array[i])
        {
            isInArray = true;
            break;
        }
    }
    
    return isInArray;
}


void deleteElement(int* array, int arraySize, int pos)
{
    int i;
    
    for(i = pos - 1; i < arraySize - 1; i++)
    {
        array[i] = array[i+1];
    }
}
 
