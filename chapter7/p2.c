#include<stdio.h>
#include<ctype.h>
#define STOP '#'
#define COUNT 8
int main()
{
/**
读取一个字符
 如果不是结束符号
 统计空字符
 统计换行符
 统计其他字符
 进行下一个输入
**/
  int num=0;

  char c;

  while((c=getchar())!=STOP){
    if(c=='\n')continue;
    printf("%c-%d,",c,c);
    num++;
    if(num%COUNT==0)printf("\n");
  }
  printf("\n");
  return 0;
}
