#include<stdio.h>
#define ROW 5
int main()
{

  for(int i=0; i<ROW; i++){
    for(int j=0; j<i+1; j++){
      printf("%c", '$');
    }
    printf("\n");
  }
  

  return 0;
}
