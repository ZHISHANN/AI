#include "AI.h"
#include <string.h>

int StringCompare(char *str1, char *str2)
{
	char result;
	
	result = stricmp(str1,str2);
	
	if (result == 0)
		return 1;
	else 
		return 0;
}

/*int Strlen(char *str1, char *str1)
{
  
}

char *SpeakToAIMachine(char *msg)
{
	
}*/