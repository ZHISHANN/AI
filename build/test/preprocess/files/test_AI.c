#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}

void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

    char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

    char *Reply = SpeakToAIMachine("hello");



    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(44));



}
