#include <stdio.h>

#include <windows.h>

void foo_host_func(void)
{
  printf("%s: Windows %#06x = %u.%u\n", "foo_host_func", WINVER,
	 (WINVER>>8)&0xff, WINVER&0xff);
}
