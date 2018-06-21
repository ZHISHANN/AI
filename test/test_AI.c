#include "unity.h"
#include "AI.h"
#include <malloc.h>

void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_string_compare_given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(StringCompare("Hello", "Hello"),1);
}*/

void test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1(void)
{
    TEST_ASSERT_EQUAL(StringCompare("MuMbo juMbO", "mambo Jumbo"),1);
}

/*void test_string_compare_given_Rambo_and_Rambu_expect_0(void)
{
    TEST_ASSERT_EQUAL(StringCompare("Rambo", "Rambu"),0);
}

void test_string_compare_given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(StringCompare("Hello", "Hell"),0);
}

void test_string_compare_given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(StringCompare("Hell", "Hello"),0);
}*/

/*void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
    char  *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";
    char  *Reply = SpeakToAIMachine("hi");
    TEST_ASSERT_EQUAL (Strlen(Reply), Strlen(ExpectedReply));
    TEST_ASSERT_EQUAL_STRING (Reply,ExpectedReply);
    free (Reply);
}*/
