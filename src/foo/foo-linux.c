#include <stdio.h>

#include <linux/version.h>

void foo_host_os_type_func(void)
{
  printf("%s()"
	 ": built for host OS version ="
         " %#08x = %u.%u.%u"
         "\n",
         __func__,
         LINUX_VERSION_CODE,
         (LINUX_VERSION_CODE>>16)&0xff,
         (LINUX_VERSION_CODE>> 8)&0xff,
         (LINUX_VERSION_CODE>> 0)&0xff
         );
}
