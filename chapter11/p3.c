#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 60
#define SPACE ' '
#define TAB '	'
#define LINE '\n'
char *getword(char *);
void print_arr(char ar[], int);
int main(void)
{
    char arr[SIZE];
    //getword(arr);
    puts(getword(arr));

    
    return 0;
}


char *getword(char *ar)
{
    
    char *temp;
    int n = 0;
    fgets(ar, SIZE, stdin);
    while(*ar == SPACE || *ar == TAB || *ar == LINE)
        ar++;
    putchar(*ar);
    putchar(LINE);
    temp = ar;
    while(*temp != '\0' && *temp != SPACE && *temp != TAB && *temp != LINE)
    {
        temp++;
        n++;
    }
    printf("%d\n", n);
    char ar1[n + 1];
    char *result = ar1;
    int i = 0;
    while(*ar != '\0' && *ar != SPACE && *ar != TAB && *ar != LINE)
    {
        ar1[i] = *ar;
        ar++;
        i++;
    }
    ar1[i] = '\0';
    return result;
}

void print_arr(char ar[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(ar[i] == SPACE || ar[i] == TAB || ar[i] == LINE)
        {
            printf("%c,", '*');
        }else
        {
            printf("%c,", ar[i]);
        }
        
    }
    putchar('\n');
    return;
}
