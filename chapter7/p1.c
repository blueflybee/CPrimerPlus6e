#include<stdio.h>
#include<ctype.h>
#define STOP '#'
#define SPACE ' '
#define ENTER '\n'
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
  int n_space=0;
  int n_enter=0;
  int n_other=0;
  char c;

  while((c=getchar())!=STOP){
    if(c==SPACE){
      n_space++;
    }else if(c==ENTER){n_enter++;}
    else n_other++;
  }
  printf("There is %d space, %d enter, %d other.\n",n_space,n_enter,n_other);

  

  return 0;
}
