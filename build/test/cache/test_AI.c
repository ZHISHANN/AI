#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}

void test_speakToAIMachine_Given_My_name_is_Shan_expect_Nice_to_meet_you_Shan(void)

{

    char *ExpectedReply = "Nice to meet you,Shan";

    char *Reply = SpeakToAIMachine("My name is Shan");



    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(54));

}
