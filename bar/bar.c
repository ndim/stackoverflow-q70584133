#include <stdio.h>

#include "bar/bar.h"

void bar_func(void)
{
  printf("%s\n", __func__);
}
