#include<stdio.h>
#include<string.h>
int main()
{

  char chars[5]={'a','b','c','d','e'};

  for(int j=strlen(chars)-1; j>=0;j--){
    printf("%c",chars[j]);
  }

  printf("\n");
  

  return 0;
}
