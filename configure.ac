AC_INIT([stackoverflow question 70584133],
        [0.0],
	[https://stackoverflow.com/questions/70584133/when-using-libadd-in-automake-libtool-links-incorrectly],
	[stackoverflow-q70584133])
AC_CONFIG_SRCDIR([src/foo/foo.c])
AC_CONFIG_AUX_DIR([auto-aux])
AC_CONFIG_MACRO_DIR([auto-m4])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])

AM_SILENT_RULES([no])

AC_PROG_CC
AM_PROG_AR
m4_pattern_forbid([LT_INIT])dnl
LT_INIT([win32-dll])

AC_CANONICAL_HOST()
AC_MSG_CHECKING([host])
AC_MSG_RESULT([$host])
AC_MSG_CHECKING([host_cpu])
AC_MSG_RESULT([$host_cpu])
AC_MSG_CHECKING([host_vendor])
AC_MSG_RESULT([$host_vendor])
AC_MSG_CHECKING([host_os])
AC_MSG_RESULT([$host_os])
AM_CONDITIONAL([OS_LINUX],   [test "x$host_os"     = xlinux-gnu])
AM_CONDITIONAL([OS_WINDOWS], [test "x$host_vendor" = xw64])

AC_DEFINE_UNQUOTED([HOST_TRIPLE], ["${host}"])

AM_COND_IF([OS_LINUX], [dnl
AC_SUBST([PTHREAD_CFLAGS], [-pthread])
AC_SUBST([PTHREAD_LIBS],   [-lpthread])
])

AC_CONFIG_FILES([
  Makefile
  src/Makefile
])
AC_OUTPUT
