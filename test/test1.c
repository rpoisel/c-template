#include <arith.h>
#include <unity.h>

void setUp(void)
{
  /* if needed */
}

void tearDown(void)
{
  /* if needed */
}

static void testAddBad(void)
{
  TEST_ASSERT_EQUAL(RC_ERROR, arith_add(1, 2, NULL));
}

static void testAddGood(void)
{
  int result;

  TEST_ASSERT_EQUAL_UINT32(RC_OK, arith_add(1, 2, &result));
  TEST_ASSERT_EQUAL_INT(3, result);
}

int main(void)
{
  UnityBegin(__FILE__);

  // cppcheck-suppress [preprocessorErrorDirective]
  RUN_TEST(testAddBad);
  // cppcheck-suppress [preprocessorErrorDirective]
  RUN_TEST(testAddGood);

  return UnityEnd();
}