#include <stdio.h>
#define SIZE	11
void reverse(int *, int);
void print_arr(int *, int);

int main(void)
{
    int source[SIZE] = {1, 2, 6, -2, 10, 4, 100, -245, 12, 65, 0};
    reverse(source, SIZE);

    print_arr(source, SIZE);

    return 0;
}

void reverse(int *ar, int size)
{
    int temp;
    int *end = ar + size - 1;
    for(; ar < end; ar++, end--)
    {
        temp = *ar;
        *ar = *end;
        *end = temp;
    }
    return ;
    
}
void print_arr(int ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    putchar('\n');
    return;
}
