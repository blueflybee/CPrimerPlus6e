#include<stdio.h>
#include<string.h>
int main()
{
  int n,m;
  int sums=0;
  printf("Enter lower and upper integer limits:");

  while(scanf("%d%d",&n,&m)==2&&n!=m){
    for(int i=n;i<=m;i++){
      
      sums+=i*i;
    }
    printf("The sums of the squares from %d to %d is %d\n",n,m,sums);
    printf("Enter the next set of limits:");
    sums=0;
  }
  

  printf("Done\n");
  return 0;
}
