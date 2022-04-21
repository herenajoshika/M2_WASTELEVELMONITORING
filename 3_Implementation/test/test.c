#include "unity.h"
#include "trash.h"


#define PROJECT_NAME   "TRASH_MEASUREMENT"

void test_light(void);
void test_voice(void);

void setUp()
{}
void tearDown()
{}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_light);
  RUN_TEST(test_voice);

  return UNITY_END();
}

void test_light(void) 
{
  TEST_ASSERT_EQUAL(3,lightindicator());
}
void test_voice(void) 
{
  TEST_ASSERT_EQUAL(2,voiceindicator());
}