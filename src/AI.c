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

  if (str1 == '\0' && str2 == '\0')
    return 0;
  else
    return 1;
}

char *SpeakToAIMachine(char *msg)
{
	char *name, *reply;

  /*if (StringCompare(msg, "hi") || StringCompare(msg, "hello") || StringCompare(msg, "hey") )
		return "Hi there! My name is TheMachine. What is yours?";
	else
		return "Invalid..";*/

	if (StringContains(msg,"My name is"))
	{
		name = ExtractName(msg);
		reply = ConcantenateStrings("Nice to meet you,",name);
		return reply;
	}

	if(StringCompare(msg,"Bye"))
		return "Goodbye Have A Nice Day";
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

	str[len + 1] = '\0';

	if (StringCompare(str,ans))
		return 1;

	//free(str);
}

char *ExtractName(char *msg)
{
	int count = LengthOfMsg(msg);
	int i,j;
	int len = count + 1;
	char *E_name = msg;
	char *temp_name;
	temp_name = malloc(len);

	for(i = 0; i <= 10 ; i++)
		E_name++;

	for(j = i; j < len ; j++)
		temp_name[j] = E_name[j];

	//temp_name[count] = '\0';

	return temp_name;
	//free(temp_name);
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

	for(i = 0; i <= 16 ; i++)
		greeting++;

	while(*r_name)
	{
		*greeting = *r_name;
		r_name++;
		greeting++;
	}
	return greeting;
}
