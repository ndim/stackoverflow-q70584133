#include <stdio.h>

#include <windows.h>

void foo_host_os_type_func(void)
{
  printf("%s: built for OS version %s"
         " %#06x = %u.%u\n",
         "foo_host_os_type_func",
         MY_HOST_OS_TYPE,
         WINVER,
         (WINVER>>8)&0xff, WINVER&0xff);
}
