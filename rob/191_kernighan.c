// Brian Kernighan's Algorithm
// https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
// Steps:
// 1. Initialize count = 0
// 2. If integer n is not zero
//      - Do bitwise & with (n-1) and assign the value back to n
//        n = n & (n-1)
//      - Increment count by 1
//      - Go to step 2
// 3. Else return count


#define NUMBER_BITS(A) (sizeof(A) * 8)

int hammingWeight(uint32_t n) 
{
    
    int count;
    
    count = 0;
    
    while(n) {
        n = n & (n - 1);
        count++;
    }
        
    return count;
}
 
