#include<stdio.h>
#define ROW 6
int main()
{
  char c;
  int i;
  for(c='A',i=0; i<ROW; i++){
    
    for(int j=0; j<i+1; j++, c++){
      printf("%c", c);
    }
    printf("\n");
  }
  

  return 0;
}
