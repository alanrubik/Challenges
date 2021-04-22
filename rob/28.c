// 28. Implement strStr()
//
// Implement strStr - http://www.cplusplus.com/reference/cstring/strstr/
// Return the index of the first occurrence of needle in haystack, or -1 if
// needle is not part of haystack.

int strStr(char * haystack, char * needle)
{
    int h_ind;
    int n_ind;
    int h_len;
    int n_len;
    int index;

    h_len = strlen(haystack);
    n_len = strlen(needle);

    index = -1;

    if(n_len > h_len) {
        index = -1;
    }
    
    if(n_len == 0) {
        index = 0;
    }

    for(h_ind = 0; h_ind < (h_len - n_len + 1); h_ind) {
        if(strncmp(haystack, needle, n_len) == 0) {
            index = h_ind;
        }
    }

    return(index);
}

