/* copy3.c -- strncpy() demo */
#include <stdio.h>
#include <string.h>  /* declares strncpy() */

const char *string_in(const char *, const char *);

int main(void)
{

  char *s1 = "copy3.c -- strncpy() demo";
  char *s2 = "rncpy() ";
  const char *p = string_in(s1, s2);
  if(p == NULL)
  {
    printf("\"%s\" dose not contains \"%s\".\n", s1, s2);
  }
  else
  {
    printf("\"%s\" contains \"%s\".\n", s1, s2);
    printf("start is \"%s\".\n", p);
  }
  
  return 0;
}

const char *string_in(const char *s1, const char *s2)
{
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  if(len2 > len1) return NULL;
  //find first same char
  const char *p = s1;
  while(*p != *s2 && *p != '\0')
  {
    p++;
  }

  if(*p == '\0')
  {
    return NULL;
  }
  
  //find first
  s1 = p;
  while(*p == *s2 && *s2 != '\0')
  {
    p++;
    s2++;
  }

  if(*s2 == '\0')
  {
    return s1;
  }

  return NULL;
}






