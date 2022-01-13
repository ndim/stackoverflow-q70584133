#include <stdio.h>

// #define MAIN_DIRECTLY_USES_LIBBAR

#ifdef MAIN_DIRECTLY_USES_LIBBAR
#include "bar/bar.h"
#endif

#include "foo/foo.h"

int main()
{
  printf("%s: %s\n", __func__, HOST_TRIPLET);
  printf("func=%s: host_triplet=%s\n", __func__, HOST_TRIPLET);

#ifdef MAIN_DIRECTLY_USES_LIBBAR
  bar_func();
#endif

  foo_func();
  return 0;
}
