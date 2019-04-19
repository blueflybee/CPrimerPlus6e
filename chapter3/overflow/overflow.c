#include<stdio.h>
int main(void){
  float toobig = 3.4e38 * 100.0f;
  printf("%e\n", toobig);//上溢

  float toosmall = 0.12345678e-10 / 2;
  printf("%e\n", toosmall);//下溢

  float a,b;
  b = 2.0e4 + 1.0;
  a = b - 2.0e4;

  printf("%f\n", a);

  char r = '\r';
  printf("%d\n", r);
  
  return 0;

}
