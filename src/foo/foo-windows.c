#include <stdio.h>

#include <windows.h>

void foo_host_os_type_func(void)
{
  printf("%s()"
	 ": built for host OS version ="
         " %#06x = %u.%u\n",
         __func__,
         WINVER,
         (WINVER>>8)&0xff, WINVER&0xff);
}
