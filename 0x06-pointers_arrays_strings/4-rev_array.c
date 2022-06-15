#ifndef main_h
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
void reverse_array(int *a, int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
    }
}
#define main_h
#endif
