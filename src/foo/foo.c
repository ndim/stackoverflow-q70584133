#include <stdio.h>

#include "bar/bar.h"
#include "foo/foo.h"
#include "foo/foo-host-os-type.h"

void foo_func(void)
{
  printf("%s %s\n", "foo_func", MY_HOST_OS_TYPE);
  bar_func();
  foo_host_os_type_func();
}
