#include <stdio.h>

#include "bar/bar.h"
#include "foo/foo.h"

int main()
{
  printf("%s: %s\n", "main", HOST_TRIPLE);
  bar_func();
  foo_func();
  return 0;
}
