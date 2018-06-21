#include "ai.h"


int stringCompare(char *str1, char *str2){
	int i = 0;
	int avgstrlen = (strlen(str1)+strlen(str2))/2;
	if ((str1 == NULL) ||  (str2 == NULL)){
		
		return 0;
	}
	else{
		while( i < (avgstrlen + 1))
		{
			if ( (str1[i] != '\0') && (str2[i] != '\0') )
			{
				i++;
			}
			else if ((str1[i] == '\0') && (str2[i] == '\0'))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}


char *speakToAiMachine(char *msg){
	
	if (msg == toupper(msg))
	
	return "a";//NULL;
	
}