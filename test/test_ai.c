#include "unity.h"
#include "ai.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_ai_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ai");
}



void test_stringCompare_Given_Hello_and_Hello_expect_1(void)
{
	TEST_ASSERT_EQUAL(1,stringCompare("Hello","Hello"));
}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,stringCompare("Hell","Hello"));
}

void test_stringCompare_Given_HeLLo_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,stringCompare("HeLLo","Hello"));
}

void test_stringCompare_Given_Helo_and_Hello_expect_1(void)
{
  TEST_ASSERT_EQUAL(0,stringCompare("Helo","Hello"));
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("Greetings");//change parameter to test
  TEST_ASSERT_EQUAL(strlen(reply),strlen(expectedReply));//errorMsg same line as expectedReply
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
  
  free(reply);
}

void test_yourNameByMachine_Given_TWQ_expect_Nice_to_meet_you_TWQ(void)
{
	/* try strcat();
	char buffer[256] = "hi";
	char *exp =  strcat(buffer,"there"); 
	printf("exp: %s\n",buffer);
	end try*/
	
	char *expected = "Nice to meet you TWQ";
	char *real = yourNameByMachine("TWQ");
	TEST_ASSERT_EQUAL_STRING(expected, real);
	free(real);
}

void test_byeToAiMachine_Given_bye_expect_Good_bye_Have_a_nice_day(void)
{
  char *expectedReply = "Good bye. Have a nice day";
 
  //char *real = convertToUpper("bye"); // hmmmmm.............
  char *reply = byeToAiMachine("BYE");
 
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
  
  free(reply);
}

//extral
void test_convertToUpper_Given_hi_expect_HI(void)
{
	char *expected = "HI";
	char *real = convertToUpper("hi");
	TEST_ASSERT_EQUAL_STRING(expected, real);
	free(real);
}
void test_convertToUpper_Given_hello_expect_HELLO(void)
{
	char *expected = "HELLO";
	char *real = convertToUpper("hello");
	TEST_ASSERT_EQUAL_STRING(expected, real);
	free(real);
}
void test_convertToUpper_Given_NEVello_expect_NEVELLO(void)
{
	char *expected = "-ELLO";
	char *real = convertToUpper("-ello");
	TEST_ASSERT_EQUAL_STRING(expected, real);
	free(real);
}
void test_convertToUpper_Given_bye_expect_BYE(void)
{
	char *expected = "BYE";
	char *real = convertToUpper("bye");
	TEST_ASSERT_EQUAL_STRING(expected, real);
	free(real);
}