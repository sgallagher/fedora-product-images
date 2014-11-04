AC_PREREQ([2.69])

m4_define([PKG_NAME], fedora-product-images)
m4_define([PKG_VERSION], 21.0.0)

AC_INIT(PKG_NAME,PKG_VERSION)
AC_CONFIG_SRCDIR([Makefile.am])

AM_INIT_AUTOMAKE([1.11 tar-ustar no-define foreign dist-bzip2 no-dist-gzip])

AC_PROG_MKDIR_P
AC_PROG_LN_S

AC_CONFIG_FILES([Makefile
                 cloud/Makefile
                 server/Makefile
                 workstation/Makefile])

AC_OUTPUT

