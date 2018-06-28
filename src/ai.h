#ifndef _AI_H
#define _AI_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <ctype.h>

int stringCompare(char *str1, char *str2);

char *speakToAiMachine(char *msg);

char *convertToUpper(char *msg);

char * yourNameByMachine(char *name);

char * byeToAiMachine(char *bye);

#endif // _AI_H
