#include <stdio.h>

#include <linux/version.h>

void foo_host_func(void)
{
  printf("%s: Linux %u = %#x = %u.%u.%u"
#if defined(LINUX_VERSION_MAJOR) && defined(LINUX_VERSION_PATCHLEVEL) && defined(LINUX_VERSION_SUBLEVEL)
         " (%u.%u.%u)"
#endif
         "\n", "foo_host_func",
         LINUX_VERSION_CODE,
         LINUX_VERSION_CODE,
         (LINUX_VERSION_CODE>>16)&0xff,
         (LINUX_VERSION_CODE>> 8)&0xff,
         (LINUX_VERSION_CODE>> 0)&0xff
#if defined(LINUX_VERSION_MAJOR) && defined(LINUX_VERSION_PATCHLEVEL) && defined(LINUX_VERSION_SUBLEVEL)
	 ,LINUX_VERSION_MAJOR, LINUX_VERSION_PATCHLEVEL, LINUX_VERSION_SUBLEVEL
#endif
  );
#if defined(LINUX_VERSION_MAJOR) && defined(LINUX_VERSION_PATCHLEVEL) && defined(LINUX_VERSION_SUBLEVEL)
  if (1) {
    const unsigned int linux_version_code = LINUX_VERSION_CODE;
    const unsigned int kernel_version =
      KERNEL_VERSION(LINUX_VERSION_MAJOR, LINUX_VERSION_PATCHLEVEL, LINUX_VERSION_SUBLEVEL);
    printf("LINUX_VERSION_CODE == %d == %#x %s KERNEL_VERSION == %d == %#x\n",
           linux_version_code, linux_version_code,
           (linux_version_code == kernel_version)?"==":"!=",
           kernel_version, kernel_version);
  }
#endif
}
