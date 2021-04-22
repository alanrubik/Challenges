// 28. Implement strStr()
//
// Implement strStr - http://www.cplusplus.com/reference/cstring/strstr/
// Return the index of the first occurrence of needle in haystack, or -1 if
// needle is not part of haystack.

int strStr(char * haystack, char * needle)
{
    int hi, ni;
    int hlen = strlen(haystack);
    int nlen = strlen(needle);
    
    if (nlen > hlen)
        return -1;
    
    if (nlen == 0)
        return 0;
    
    for (hi = 0; hi < (hlen - nlen + 1); hi++) {
        if (strncmp(&haystack[hi], needle, nlen) == 0)
            return hi;
    }

    return -1;
}

