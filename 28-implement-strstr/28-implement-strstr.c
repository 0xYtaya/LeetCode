int strStr(char *haystack, char *needle){
    if (strlen(needle) > strlen(haystack))
        return -1;
    int i = 0;
    int len = strlen(needle);
    while (haystack[i])
    {
        if (haystack[i] == needle[0] && !strncmp(&haystack[i],needle,len))
            return(i);
        i++;
    }
    return -1;
}