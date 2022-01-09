ACLOCAL_AMFLAGS = -I auto-m4

barincludedir           = $(includedir)/bar

EXTRA_DIST              =
barinclude_HEADERS      =
bin_PROGRAMS            =
lib_LTLIBRARIES         =
nobase_include_HEADERS  =


lib_LTLIBRARIES        += libbar.la
libbar_la_CPPFLAGS      =
libbar_la_LDFLAGS       =
libbar_la_SOURCES       =

libbar_la_CPPFLAGS     += -I$(top_srcdir)

libbar_la_SOURCES      += ../bar/bar.c
libbar_la_SOURCES      += ../bar/bar.h
barinclude_HEADERS     += ../bar/bar.h

if OS_WINDOWS
libbar_la_LDFLAGS      += -no-undefined
endif


lib_LTLIBRARIES        += libfoo.la
libfoo_la_CFLAGS        =
libfoo_la_CPPFLAGS      =
libfoo_la_LDFLAGS       =
libfoo_la_LIBADD        =
libfoo_la_SOURCES       =

libfoo_la_CPPFLAGS     += -I$(top_srcdir)

libfoo_la_LIBADD       += libbar.la

libfoo_la_SOURCES      += foo/foo.c
libfoo_la_SOURCES      += foo/foo.h
nobase_include_HEADERS += foo/foo.h

libfoo_la_SOURCES      += foo/foo-host.h

if OS_LINUX
libfoo_la_SOURCES      += foo/foo-linux.c

libfoo_la_CFLAGS       += $(PTHREAD_CFLAGS)
libfoo_la_LIBADD       += $(PTHREAD_LIBS)
endif

if OS_WINDOWS
libfoo_la_SOURCES      += foo/foo-nt.c
libfoo_la_LDFLAGS      += -no-undefined
endif


bin_PROGRAMS  += main
main_CPPFLAGS  =
main_LDADD     =
main_SOURCES   =

main_CPPFLAGS += -I$(top_srcdir)
main_SOURCES  += main.c
main_LDADD    += libfoo.la
