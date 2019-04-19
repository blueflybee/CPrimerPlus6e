#include<stdio.h>
#include<limits.h>
int main(void){
  printf("<整型溢出测试>\n");
  int maxInt = INT_MAX;
  unsigned int maxUInt = UINT_MAX;

  printf("max int is %d\n", maxInt);
  printf("max unsigned int is %u\n", maxUInt);

  printf("%d %d %d\n", maxInt, maxInt+1, maxInt+2);
  printf("%u %u %u\n", maxUInt, maxUInt+1, maxUInt+2);


  return 0;

}
