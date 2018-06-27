#include "unity.h"
#include "AI.h"
#include <malloc.h>
#include <ctype.h>
#include <string.h>

void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_string_compare_given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,StringCompare("Hello", "Hello"));
}

void test_string_compare_given_MaMbo_juMbO_and_mambo_Jumbo_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,StringCompare("MaMbo juMbO", "mambo Jumbo"));
}

void test_string_compare_given_Rambo_and_Rambu_expect_0(void)
{
    TEST_ASSERT_EQUAL(0,StringCompare("Rambo", "Rambu"));
}

void test_string_compare_given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(0,StringCompare("Hello", "Hell"));
}

void test_string_compare_given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(0,StringCompare("Hell", "Hello"));
}*/

/*void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
    char  *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";
    char  *Reply = SpeakToAIMachine_1("hello");

    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
    //free (Reply);
}*/

void test_speakToAIMachine_Given_My_name_is_Shan_expect_Nice_to_meet_you_Shan(void)
{
    char  *ExpectedReply = "Nice to meet you,Shan";
    char  *Reply = SpeakToAIMachine_2("My name is Shan");

    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

/*void test_speakToAIMachine_Given_Bye_expect_Goodbye_Have_A_Nice_Day(void)
{
    char  *ExpectedReply = "Goodbye Have A Nice Day";
    char  *Reply = SpeakToAIMachine("Bye");

    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}*/
