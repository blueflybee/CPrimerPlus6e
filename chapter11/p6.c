#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 60
#define SPACE ' '
#define STOP '@'
#define LINE '\n'
short is_within(const char *, char);

int main(void)
{
  const char *s = "How are ya? sweety?";
  char ch;
  //const char *r="";
  //while((ch = getchar())){
  //  r = charAt(s, ch);
  //}
  while((ch = getchar())){
    short within = is_within(s, ch);
    if(ch == '\n') continue;
    printf("%d", within);
    //putchar(ch);
  }
  return 0;
}

short is_within(const char *s, char ch){
  const char *r = s;
  while(*r != '\0'){
    if(*r == ch) return 1;
    r++;
  }
  return 0;
}




