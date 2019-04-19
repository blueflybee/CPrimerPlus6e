#include<stdio.h>
int main(void){
	printf("char	: %ld bytes, %ld bit.\n", sizeof(char), sizeof(char) * 8);
	printf("short	: %ld bytes, %ld bit.\n", sizeof(short), sizeof(short) * 8);
	printf("int	: %ld bytes, %ld bit.\n", sizeof(int), sizeof(int) * 8);
	printf("u int	: %ld bytes, %ld bit.\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
	printf("s int	: %ld bytes, %ld bit.\n", sizeof(signed int), sizeof(signed int) * 8);
	printf("long	: %ld bytes, %ld bit.\n", sizeof(long), sizeof(long) * 8);
	printf("longlong: %ld bytes, %ld bit.\n", sizeof(long long), sizeof(long long) * 8);

	int a = 5u;
	printf("a = %u\n", a);

	return 0;
}
