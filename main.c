#include <stdio.h>

#include "bar/bar.h"
#include "foo/foo.h"

int main()
{
  printf("%s\n", "main");
  bar_func();
  foo_func();
  return 0;
}
