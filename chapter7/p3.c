#include<stdio.h>
#include<ctype.h>
#define STOP 0
int main()
{

  int i;
  int n_even=0;
  int n_odd=0;
  int s_even=0;
  int s_odd=0;

  char c;

  while(scanf("%d",&i)==1){
    if(i==0)break;
    if(i%2==0){
      n_even++;
      s_even+=i;
    }else{
      n_odd++;
      s_odd+=i;
    }
  }
  printf("%d even and %d odd\n",n_even,n_odd);
  printf("even average is %f\n",(float)s_even/n_even);
  printf("odd average is %f\n",(float)s_odd/n_odd);
  return 0;
}
