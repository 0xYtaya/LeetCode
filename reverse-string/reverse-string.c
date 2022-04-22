void reverseString(char* s, int sSize){
    int len = sSize -1;
    int i = 0;
    while(i < len)
    {
        char tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
        i++;
        len--;
    }
}