// 66. Plus One
// https://leetcode.com/problems/plus-one/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    *returnSize = digitsSize + 1;
    int * digitsPlusOne = (int *)malloc(sizeof(int) * (*returnSize));
    int carry = 1;
    int sum;
        
    for(int i = digitsSize - 1; i >= 0; i--) {
        sum = (digits[i] + carry) % 10;
        carry = (digits[i] + carry) / 10;
        digitsPlusOne[i + 1] = sum; 
    }
    
    if(carry == 0) {
        *returnSize = digitsSize;
        *digitsPlusOne++;
    }
    else if(carry == 1) {
        digitsPlusOne[0] = 1; 
    }
     
    return digitsPlusOne;
}
