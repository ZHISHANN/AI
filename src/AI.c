#include "AI.h"
#include <string.h>
#include <ctype.h>
#include <malloc.h>

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
  return 1;
}

char *SpeakToAIMachine_1(char *msg)
{
  if (StringCompare(msg, "hi") || StringCompare(msg, "hello") || StringCompare(msg, "hey") )
		return "Hi there! My name is TheMachine. What is yours?";
	else
		return "Invalid..";
}

int StringContains(char *msg, char *ans)
{
	char *temp = msg;
	int len = LengthOfMsg(msg);
	char *str;
	str = malloc(len + 1);
	int i;

	for(i = 0 ; i < 10 ; i++)
	{
		str[i] = *temp;
		temp++;
	}

	str[i] = '\0';

	if (StringCompare(str,ans))
		return 1;
  else 
    return 0;

	//free(str);
}

char *SpeakToAIMachine_2(char *msg)
{
  char *name, *reply;
  
  if (StringContains(msg,"My name is"))
	{
		name = ExtractName(msg);
		reply = ConcantenateStrings("Nice to meet you,",name);
		return reply;
	}
}

char *SpeakToAIMachine_3(char *msg)
{
  if(StringCompare(msg,"Bye"))
		return "Goodbye Have A Nice Day";
  else 
    return "Invalid";
}

char *ExtractName(char *msg)
{
	int count = LengthOfMsg(msg);
	int i;
	int len = count - 10;
	//char *E_name = msg;
	char *temp_name;
	temp_name = malloc(len);

	//for(i = 0; i <= 10 ; i++)
	msg = (msg + 11);

	for(i = 0; i < len ; i++)
	{
			temp_name[i] = *msg;
			msg++;
	}

	temp_name[len] = '\0';

	return temp_name;
}

int LengthOfMsg(char *msg)
{
	int length = 0;

	while(msg[length] != '\0')
		length++;
		return length;
}

char *ConcantenateStrings(char *greeting, char *r_name)
{
	int i;
	int len1 = LengthOfMsg(greeting);
	//int len2 = LengthOfMsg(r_name);
	char *temp_cs;
	temp_cs = malloc(256);

	for(i = 0; i < len1 ; i++)
	{
		temp_cs[i] = *greeting;
		greeting++;
	}

	while(*r_name != '\0')
	{
		temp_cs[i] = *r_name;
		r_name++;
		i++;
	}
	temp_cs[i] = '\0';
	return temp_cs;
}
