#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}













void test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1(void)

{

    UnityAssertEqualNumber((UNITY_INT)((StringCompare("MuMbo juMbO", "mambo Jumbo"))), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}
