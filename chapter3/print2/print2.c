#include<stdio.h>
#include<limits.h>
int main(void){
  printf("<more printf>\n");
  int maxInt = INT_MAX;
  unsigned int maxUInt = UINT_MAX;

  short s = 1;
  int i = 9;
  long l = 3;

  printf("print short :%hd\n", s);
  printf("print int oct  :%#o\n", i);
  printf("print int hex  :%#x\n", i);
  printf("print long  :%ld\n", l);

  unsigned int un = 3000000000;
  short end = 200;
  long big = 65537;
  long long verybig = 12345678908642;
  
  printf("un = %u and not %d\n", un, un);
  printf("end = %hd and %d\n", end, end);
  printf("big = %ld and not %hd\n", big, (short)big);//只保留short长度
  printf("verybig = %lld and not %d\n", verybig, (int)verybig);//只保留long长度

  return 0;

}
