#include "unity.h"

#define PROJECT_NAME  "Quiz_Competition"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Quiz_Competition
 * 
 */
extern void test_quiz();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_quiz);
    
    /* Close the Unity Test Framework */
    return (UnityEnd());
}