#include<stdio.h>
#define STR "str"
int main(void)
{
  int age;
  float assets;
  char pet[30];

  printf("Enter your age, assets, and favorite pet.\n");
  int item = scanf("%d %f", &age, &assets);
  scanf("%s", pet);

  printf("%d $%.2f %s\n", age, assets, pet);

  printf("input items = %d\n", item);
  return 0;
}
