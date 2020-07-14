#include <arith.h>

RC arith_add(int a, int b, int* result)
{
  if (!result)
  {
    return RC_ERROR;
  }

  *result = a + b;
  return RC_OK;
}