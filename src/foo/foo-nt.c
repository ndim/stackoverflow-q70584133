#include <stdio.h>

#include <windows.h>

void foo_host_func(void)
{
  printf("%s: Windows %#04x\n", "foo_host_func", WINVER);
}
