// 190. Reverse Bits
//
// Reverse bits of a given 32 bits unsigned integer.

#define NUM_BITS(data_type) (sizeof(data_type) * 8) 

uint32_t reverseBits(uint32_t n) {
    
    uint32_t reversed_n = 0;
    
    for(int i = NUM_BITS(uint32_t) - 1; i >= 0; i--)
    {
        reversed_n = reversed_n + (n & 1) << i;  
        n = n >> i;
    }
    
    return reversed_n;
}
 
