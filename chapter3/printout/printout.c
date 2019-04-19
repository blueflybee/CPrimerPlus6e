#include<stdio.h>
#define PI 3.1415926
#define STR "HAHA"

int main(void){
  float radius = 1.2345e5;
  float r = 123.4583645;
  printf("radius is %a\n", radius);
  printf("radius is %A\n", radius);

  printf("r is %e\n", r);
  printf("r is %E\n", r);

  printf("int in hex is %x\n", 126);
  printf("int in Hex is %X\n", 126);

  printf("百分号print %%\n");

  double a = 3852.12345678901234567890;
  float b = 3852.12345678901234567890;
  printf("double length a = %Lf\n", a);
  printf("float length b = %f\n", b);
  return 0;
}
