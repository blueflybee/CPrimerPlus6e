#include<stdio.h>
#include<string.h>
int main(void)
{
float size;
float speed;

printf("Enter file size(MB):\n");
scanf("%f", &size);

printf("Enter download speed(Mb/s):\n");
scanf("%f", &speed);

printf("At %.2f megabits per second, afile of %.2f megabytes, download in %.2f seconds.\n",
      speed, size, size * 8 / speed);


return 0;
}
