/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */
#define SIZE 400
char * s_gets(char * st, int n);
char *remove_space(char *);

int main(void)
{
    char s[SIZE];
    
    printf("Enter words to reverse:\n");
    while (s_gets(s, SIZE)[0] != '\0')
    {
       puts(remove_space(s));
       printf("Enter words to reverse:\n");
    }
    printf("Done.\n");
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

char *remove_space(char *s)
{
  char *p = s;
  while(*p != '\0')
  {
    if(*p == ' ')
    {
      strcpy(p, p + 1);
      //printf("%s\n", s);
      p--;
    }
    p++;
  }
  
  return s;
}






