#include <stdio.h>

// #define MAIN_DIRECTLY_USES_LIBBAR

#ifdef MAIN_DIRECTLY_USES_LIBBAR
#include "bar/bar.h"
#endif

#include "foo/foo.h"

int main()
{
  printf("%s: %s\n", "main", HOST_TRIPLE);

#ifdef MAIN_DIRECTLY_USES_LIBBAR
  bar_func();
#endif

  foo_func();
  return 0;
}
