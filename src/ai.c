#include "ai.h"

//C cant compare String that why we need this function
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


char *convertToUpper(char *msg){
	
	char * buffer = (char *)malloc(strlen(msg));
	int i = 0;
	while( msg[i] != '\0') {
      buffer[i] = toupper(msg[i]);
      i++;
	}
    buffer[i] = '\0'; //cut the extral part
	return buffer;
}


/*	function needed:
*	char *convertToUpper(char *msg) ; msg == hi
*/
char *speakToAiMachine(char *msg){
	
	char * temp = "Hi there! My name is TheMachine. What is yours?";
	char * reply = (char *)malloc(strlen(temp));
	strcpy(reply,temp);
	
	printf("result : %s\n",convertToUpper(msg));
	
	if(((stringCompare(msg ,"HI"))==1) || (stringCompare(msg ,"HELLO")==1) \
		|| (stringCompare(msg ,"HEY")==1) || (stringCompare(msg ,"GREETINGS")==1))
	{
		return reply;
	}
	else
	{						
		char * errorMsg = 	"error..........................................";	
		return errorMsg;
	}
}
/* function strcat(strTemp,name);
*	strTemp need malloc
*	name is char* ptr
*/
char * yourNameByMachine(char *name){
	
	char * startLine = "Nice to meet you ";
	int totalLength = (strlen(startLine) + strlen(name));
	char * strTemp = (char *)malloc(strlen(startLine));
	strcpy(strTemp,startLine);
	char * acknowledge = strcat(strTemp,name);
	printf("acknowledge: %s\n",acknowledge);
	return acknowledge;
}
