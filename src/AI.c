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

  if (strcmp(msg,"hi") || strcmp(msg,"hello") || strcmp(msg,"hey") )
    return "Hi there! My name is TheMachine. What is yours?";
  else
		return 0;

	if (StringContains(msg,"My name is"))
	{
		name = ExtracName(msg);
		reply = ConcantenateStrings("Nice to meet you,",name);
		return reply;
	}
}

char ExtracName(char *msg)
{
	int count = LengthOfMsg(msg);
	char *name,*temp_name;
	temp_name = malloc(count + 1);
	name = malloc(count + 1);

	for(i = 0 ; i < count + 1 ; i++)
	{
		strcpy(temp_name[i],name[12 + i]);
	}
	return temp_name;            //return the name as written
}

int LengthOfMsg(char *msg)
{
	int length = 0;

	if (msg[length] != '\0')
		length++;
		return length;
}

char ConcantenateStrings(*msg)
{
	int i = 0;
	

}
