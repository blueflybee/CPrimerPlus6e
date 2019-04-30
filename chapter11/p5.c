#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 60
#define SPACE ' '
#define STOP '@'
#define LINE '\n'
const char *charAt(const char *, char);

int main(void)
{
  const char *s = "How are ya? sweety?";
  char ch;
  //const char *r="";
  //while((ch = getchar())){
  //  r = charAt(s, ch);
  //}
  while((ch = getchar())){
    const char *r = charAt(s, ch);
    if(ch == '\n') continue;
    printf("%s", r);
    //putchar(ch);
  }
  return 0;
}

const char *charAt(const char *s, char ch){
  const char *r = s;
  while(*r != '\0'){
    if(*r == ch) return r;
    r++;
  }
  return NULL;
}




