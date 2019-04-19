#include<stdio.h>
#include<string.h>
int main()
{
  int num;
  double n,sum;
  printf("Enter the number:");
  scanf("%d",&num);
  for(int i=0;i<num;i++){
    sum+=1.0/((double)i+1);
  }
  printf("The sum is: %f\n",sum);
  return 0;
}
