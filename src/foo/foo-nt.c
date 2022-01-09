#include <stdio.h>

#include <windows.h>

void foo_host_func(void)
{
  printf("%s: Windows %#06x\n", "foo_host_func", WINVER);
}
