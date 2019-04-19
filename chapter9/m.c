#include <stdio.h>
#include <ctype.h>
#include "m.h"
double min(double x, double y)
{
  return x<=y?x:y;
}

void chline(char ch,int column,int row)
{
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      putchar(ch);
    }
    putchar('\n');
  }
}

void larger_of(double *x,double *y)
{
  *y=*x=*x>=*y?*x:*y;
}

void sort_three(double *x,double *y,double *z)
{
  //double min=*x<=*y?*x:*y;
  //min=min<=*z?min:*z;
  
  //double max=*x>=*y?*x:*y;
  //max=max>=*z?max:*z;
  double temp;
  
  if(*x>*y){
    temp=*x;
    *x=*y;
    *y=temp;
  }
  if(*x>*z){
    temp=*x;
    *x=*z;
    *z=temp;
  }
  if(*y>*z){
    temp=*y;
    *y=*z;
    *z=temp;
  }
}


void show_char_index(void)
{
  char ch;
  while((ch=getchar())!=EOF){
    if(isalpha(ch)){
      
      if(isupper(ch))ch=tolower(ch);
      printf("%d,", ch-S_A+1);
    }else{
      putchar('^');
    }
    
  }
  putchar('\n');
}

double power(double n,int p)
{
  if(p<0){
    p = -p;
    n = 1.0 / n;
  }
  double pow=1;
  int i;
  for(i=1;i<=p;i++){
    pow*=n;
  }
  return pow;
}


double rpower(double n,int p)
{
  if(p<0){
    p = -p;
    n = 1.0 / n;
  }

  if(p == 0) return 1;
  if(p == 1) return n;
  else return n * rpower(n, p - 1);

}

void to_base_n(unsigned long n)
{
  int r;
  r = n % 2;
  if(n >= 2) to_base_n(r / 2);
  putchar(r == 0 ? '0' : '1');
  //putchar('\n');
  return;
}












