/**
 * @file test_library1.c
 * @author Kousika  (kousirajasekar12@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "library1.h"
#include "unity.h"
#include<stdlib.h>

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

search_t s = TEST;


void test_addBook(void)
{
    TEST_ASSERT_EQUAL(0,addBook(5));
}

void test_booksList(void)
{
    TEST_ASSERT_EQUAL(booksList(5));
}

void test_del(void)
{
    TEST_ASSERT_EQUAL(0,del(1));
}


void test_issueBook(void)
{
    TEST_ASSERT_EQUAL(0,issueBook(1));
}




    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_addBook);
    RUN_TEST(test_booksList);
    RUN_TEST(test_del);
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}