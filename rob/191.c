// 191. Number of 1 Bits
//
// Write a function that takes an unsigned integer and returns the number of '1'
// bits it has (also known as the Hamming weight).


// 3 -> b'0011
// 1 -> b'0001
// &
//   ->   ...1 = True

#define NUMBER_BITS(A) (sizeof(A) * 8)

int hammingWeight(uint32_t n) 
{
    
    int count;
    
    count = 0;
    
    for(int i = 0; i < NUMBER_BITS(uint32_t); i++) {
        if(n & 1) {
            count++;            
        }
        n >>= 1;
    }
        
    return count;
}
 
