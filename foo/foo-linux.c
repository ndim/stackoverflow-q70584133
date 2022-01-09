#include <stdio.h>

#include <linux/version.h>

void foo_host_func(void)
{
  printf("%s: Linux %u.%u.%u\n", "foo_host_func",
	 LINUX_VERSION_MAJOR, LINUX_VERSION_PATCHLEVEL, LINUX_VERSION_SUBLEVEL);
}
