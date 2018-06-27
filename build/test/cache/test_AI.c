#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_string_compare_given_Hello_and_Hello_expect_1(void)

{

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((StringCompare("Hello", "Hello"))), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_MaMbo_juMbO_and_mambo_Jumbo_expect_1(void)

{

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((StringCompare("MaMbo juMbO", "mambo Jumbo"))), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Rambo_and_Rambu_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Rambo", "Rambu"))), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Hello_and_Hell_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Hello", "Hell"))), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Hell_and_Hello_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Hell", "Hello"))), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

}



void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

    char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

    char *Reply = SpeakToAIMachine_1("hello");



    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(45));



}



void test_speakToAIMachine_Given_My_name_is_Shan_expect_Nice_to_meet_you_Shan(void)

{

    char *ExpectedReply = "Nice to meet you,Shan";

    char *Reply = SpeakToAIMachine_2("My name is Shan");



    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(54));

}



void test_speakToAIMachine_Given_Bye_expect_Goodbye_Have_A_Nice_Day(void)

{

    char *ExpectedReply = "Goodbye Have A Nice Day";

    char *Reply = SpeakToAIMachine_3("Bye");



    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(62));

}
