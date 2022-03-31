#include "unity.h"
#include <library_operations.h>

/* Modify these two lines according to the project */
#include <library_operations.h>
#define PROJECT_NAME    "Library_Management_System"

/* Prototypes for all the test functions */
void addBook(void);
void issueBook(void);
void issueList(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(addBook);
  RUN_TEST(issueBook);
  RUN_TEST(issueList);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

  void addBook(int id, int m.Name)
{
    return issueBook;
}

void issueBook(int id, int m.Name )
{
    return issueBook;
}


void issueList(int id,int m.Name)
{
    return issueList;
}
