#ifndef ARITH_H
#define ARITH_H

#include <arith_rc.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

RC arith_add(int a, int b, int* result);

#if ARITH_SHORT_NAMES == 1
#define add(...) arith_add(__VA_ARGS__)
#endif /* ARITH_SHORT_NAMES */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* ARITH_H_ */