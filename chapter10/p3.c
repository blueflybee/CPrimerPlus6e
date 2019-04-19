#include <stdio.h>
#define SIZE	8
int max(int *, int);

int main(void)
{
    int source[SIZE] = {1, 2, 6, -2, 10, 4, 100, -245};

    printf("max is %d\n", max(source, SIZE));

    return 0;
}

int max(int *ar, int size)
{
    int max;
    int *end = ar + size;
    for(max = *ar; ar < end; ar++)
    {
        max = *ar > max ? *ar : max;
    }
    return max;
    
}

