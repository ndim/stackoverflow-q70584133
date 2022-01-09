#include <stdio.h>

#include "bar/bar.h"
#include "foo/foo.h"
#include "foo/foo-host.h"

void foo_func(void)
{
  printf("%s\n", "foo_func");
  bar_func();
  foo_host_func();
}
