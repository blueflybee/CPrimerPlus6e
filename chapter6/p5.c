#include<stdio.h>
#define _A 'A'
int main()
{

  char c;
  int i;
  int row;
  printf("enter a letter:");
  scanf("%c", &c);

  row = c - _A + 1;
  for(c=_A,i=0; i<row; i++, c=_A){
    
    for(int j=0; j<row-i-1; j++){
      printf("%c", ' ');
    }

    for(int j=0; j<i+1; j++, c++){
      printf("%c", c);
    }
    //printf("%c\n", c);

    for(c--;c>_A;){
      printf("%c", --c); 
    }

    printf("\n");
  }
  

  return 0;
}
