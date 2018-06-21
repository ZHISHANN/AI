#include "AI.h"
#include <string.h>
#include <ctype.h>

int StringCompare(char *str1, char *str2)
{
	while (*str1 != '\0' || *str2 != '\0')
  {
    if (tolower(*str1) == tolower(*str2))
    {
      str1++;
      str2++;
    }
    else 
      return 0;
  }
  
  if (str1 == '\0' && str2 == '\0')
    return 0;
  else 
    return 1;
}

char *SpeakToAIMachine(char *msg)
{
  while (*msg != '\0')
  {
    tolower(*msg);
    msg++;
  }
  
  if (*msg == '\0')
    return "Hi there! My name is TheMachine. What is yours?";
  else 
    return 0;
}