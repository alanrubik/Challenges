#define NUM_BITS (sizeof(x) * 8)

int hammingDistance(int x, int y)
{
    
    int xoredValues;
    int count;
    
    xoredValues = x ^ y;
    count = 0;
    
    for(int i = 0; i < NUM_BITS; i++) {
        if(xoredValues & 1) {
            count++;
        };
        
        xoredValues >>= 1;
    }
    
    return count;   
}
 
