#ifndef main_h
int _strcmp(char *s1, char *s2)
{
    //This is comparing the two strings and returning the first string if they are equal.
    int i;
    for (i = 0; s1[i] == s2[i]; i++)
    {
        if (s1[i] == '\0')
        {
            return (0);
        }
    }
    return (s1[i] - s2[i]);
}
#define main_h
#endif
