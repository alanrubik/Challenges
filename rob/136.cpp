// 136. Single Number
//
// Given a non-empty array of integers nums, every element appears 
// twice except for one. Find that single one.

// Solution - Bit Manipulation
// Explanation at https://leetcode.com/problems/single-number/solution/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int a = 0;
        
        for(int i = 0; i < nums.size(); ++i) {
            a ^= nums[i];
        }
        
        return a;
    }
};
 
