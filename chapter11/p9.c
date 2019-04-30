/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */
#define SIZE 40
char * s_gets(char * st, int n);
char *reverse(char *);

int main(void)
{
    char s[SIZE];
    int i = 0;
    
    printf("Enter words to reverse:\n");
    while (s_gets(s, SIZE))
    {
       puts(reverse(s));
       printf("Enter words to reverse:\n");
    }
    
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

char *reverse(char *s)
{
  int len = strlen(s);
  char *start = s;
  char *end = s + len -1;
  char temp;
  for(;start < end; start++, end--)
  {
    temp = *start;
    *start = *end;
    *end = temp;
  }
  
  return s;
}






