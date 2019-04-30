/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */
#define SIZE 40
#define TARGSIZE 6
#define LIM 5
char * s_gets(char * st, int n);
char *mystrncpy(char *, const char *, int n);

int main(void)
{
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;
    
    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            //strncpy(qwords[i], temp, TARGSIZE - 1);
            mystrncpy(qwords[i], temp, TARGSIZE);
            //qwords[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);
    
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

char *mystrncpy(char *s1, const char *s2, int n)
{
  int len = strlen(s2) + 1;
  printf("len is %d\n", len);
  n = n >= len ? len : n;
  for(int i = 0; i < n; i++)
  {
    if(i == n - 1){
      s1[i] = '\0';
    }else{
      s1[i] = s2[i];
    }
  }
  
  return s1;
}






