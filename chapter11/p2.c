#include <stdio.h>
#include <ctype.h>
#define SIZE 10
void getchar_n(char *, int);
void print_arr(char ar[], int);
int main(void)
{
    char arr[SIZE];
    getchar_n(arr, SIZE);
    print_arr(arr, SIZE);
    
    return 0;
}


void getchar_n(char *ar, int size)
{
    int n = 0;
    char ch;
    while(n < size && (ch = getchar()) != ' ' && ch != '\n' && ch != '	')
    {
        *ar++ = ch;
        n++;
    }
}

void print_arr(char ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c,", ar[i]);
    }
    putchar('\n');
    return;
}
