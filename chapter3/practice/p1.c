#include<stdio.h>
int main(void)
{
char firstname[40];
char lastname[40];
printf("Enter your first name:\n");
scanf("%s", firstname);
printf("Enter your last name:\n");
scanf("%s", lastname);

printf("Your full name: %s,%s\n", firstname, lastname);
return 0;
}
