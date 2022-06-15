char *_strncat(char *dest, char *src, int n)
{
    int s1, s2;
    
    for(s1=0; dest[s1]!='\0';s1++);
    for (s2=0;s2<n;s2++)
    {
        dest[s1] = src[s2];
        s1++;
    }

    return(dest);
}
