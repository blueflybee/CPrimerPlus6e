#include<stdio.h>
#define PI 3.1415926
#define STR "HAHA"

int main(void){
  float radius, area, circum;
  const int MONTHS = 20;//read-only
  printf("please enter the radius of your pizza.\n");
  scanf("%f", &radius);
  area = PI * radius * radius;
  circum = 2 * PI * radius;
  printf("your pizza's area is %.2f\n", area);
  printf("your pizza's circum is %.2f\n", circum);
  printf("Good job! %s\n", STR);

  //MONTHS = 30;

  return 0;
}
