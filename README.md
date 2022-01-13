stackoverflow-q70584133
=======================

This tries to reproduce and solve
https://stackoverflow.com/questions/70584133/when-using-libadd-in-automake-libtool-links-incorrectly by trying to reproduce OP's example.


Get the source tree and initialize the build system
---------------------------------------------------

    [user@host ~]$ git clone https://github.com/ndim/stackoverflow-q70584133.git
    […]
    [user@host ~]$ cd stackoverflow-q70584133
    [user@host stackoverflow-q70584133]$ autoreconf -vis .
    […]
    [user@host stackoverflow-q70584133]$ _


Build to run natively on the build host
---------------------------------------

    [user@host stackoverflow-q70584133]$ mkdir _b-host && cd _b-host
    [user@host _b-host]$ ../configure --prefix=$PWD/_i CC="gcc -std=c99" CFLAGS="-pedantic -Wall -Wextra -Werror"
    […]
    [user@host _b-host]$ make && ./src/main
    […]
    main: x86_64-pc-linux-gnu
    foo_func
    bar_func
    foo_host_func: Linux 331524 = 0x50f04 = 5.15.4 (5.15.4)
    [user@host _b-host]$ make install && ./_i/bin/main
    […]
    main: x86_64-pc-linux-gnu
    foo_func
    bar_func
    foo_host_func: Linux 331524 = 0x50f04 = 5.15.4 (5.15.4)
    [user@host _b-host]$ _


Build on Linux to run on Windows using the mingw cross-compiler
---------------------------------------------------------------

Of course, running the generated Windows executable on Linux requires
wine to be installed.

    [user@host stackoverflow-q70584133]$ mkdir _b-w64 && cd _b-w64
    [user@host _b-w64]$ ../configure --host=x86_64-w64-mingw32 --prefix=$PWD/_i CC="x86_64-w64-mingw32-gcc -std=c99" CFLAGS="-pedantic -Wall -Wextra -Werror -Wno-error=attributes"
    […]
    [user@host _b-w64]$ make && ./src/main.exe
    […]
    main: x86_64-w64-mingw32
    foo_func
    bar_func
    foo_host_func: Windows 0x0a00
    [user@host _b-w64]$ make install && ./_i/bin/main.exe
    […]
    main: x86_64-w64-mingw32
    foo_func
    bar_func
    foo_host_func: Windows 0x0a00 = 10.0
    [user@host _b-w64]$ _


Summary
-------

I still cannot reproduce OP's issue that `make` succeeds and `make
install` produces a linker error failing to find libbar.
