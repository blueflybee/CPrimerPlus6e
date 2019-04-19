#include<stdio.h>
#define STR "str"
int main()
{
  
  printf("%g\n", 1234567.890);   //很小的小数或很大的小数时，自动使用%e计数法，其它情况用%f
  
  printf("*%10s*\n", STR);
  printf("*%-10s*\n", STR);

  printf("*%+10d*\n", 100);
  printf("*%+10d*\n", -100);

  printf("*% 10d*\n", 100);
  printf("*% 10d*\n", -100);

  printf("*%010d*\n", 100);
  printf("*%10f*\n", 1.0);
  printf("*%-010d*\n", 100);
  printf("*%010.8d*\n", 100);
  printf("*%10.10d*\n", 100000);

  printf("*%o*\n", 100);
  printf("*%#o*\n", 100);
  printf("*%x*\n", 100);
  printf("*%#x*\n", 100);
  printf("*%#X*\n", 100);
  
  printf("*%hd*\n", 100);
  printf("*%hu*\n", -100);
  printf("*%#hx*\n", 100);

  printf("*%ld*\n", 100);
  printf("*%lu*\n", -100);
  printf("*%#lx*\n", 100);

  printf("*%lld*\n", 100);
  printf("*%llu*\n", -100);
  printf("*%#llx*\n", 100);

  printf("*%f*\n", 12.5f);
  printf("*%Lf*\n", 12.5L);
  printf("*%Le*\n", 12.5L);

  printf("*%zd*\n", sizeof(char));

  printf("Here's one way to print a ");
  printf("long string.\n");

  printf("Here's one way to print a \
long string.\n");
  printf("Here's the newest way to print a "
         "long string.\n");

  return 0;
}
