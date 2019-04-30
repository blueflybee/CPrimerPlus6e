/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */
#define SIZE 60
#define TARGSIZE 60
#define LIM 10
char * s_gets(char * st, int n);
char *mystrncpy(char *, const char *, int n);

int main(void)
{
  char qwords[LIM][SIZE];
  char temp[SIZE];
  int i = 0;
  int menu = -1;
  printf("Enter %d words:\n", LIM);
  while (i < LIM && s_gets(qwords[i], SIZE))
  {    
    i++;   
  }
  printf("Here is the menu, select one or input '0' to quit:\n");
  printf("1.print the string list.\n");
  
  while(scanf("%d", &menu) == 1)
  {
    switch(menu)
    {
      case 1:
       for (i = 0; i < LIM; i++)  puts(qwords[i]);
       break;

    }
  }
  
  puts("Here are the words accepted:");
  
  
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






