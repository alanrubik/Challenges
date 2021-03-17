// 88. Merge Sorted Array
//
// Give two sorted integer arrays nums1 and nums2, merge nums2 into nums1
// as one sorted array.


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    // O(1) - for storage, O(n + m) - running time
    
    int i;
    int j;
    int k;
    
    i = m - 1;  // Last element of nums1
    j = n - 1;  // Last element of nums2
    k = nums1Size - 1;  // m + n - 1 - Last element nums1 can allocate a value
    
    // Iterate nums1 and nums2 from last element until first element, then
    // compare them and the biggest of these two gets stored at nums1
    while(i >= 0 && j >= 0)
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    
    while(j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
}
  
