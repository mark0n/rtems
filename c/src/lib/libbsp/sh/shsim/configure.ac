## Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([rtems-c-src-lib-libbsp-sh-shsim],[_RTEMS_VERSION],[http://www.rtems.org/bugzilla])
AC_CONFIG_SRCDIR([bsp_specs])
RTEMS_TOP(../../../../../..)

RTEMS_CANONICAL_TARGET_CPU
AM_INIT_AUTOMAKE([no-define nostdinc foreign 1.12.2])
RTEMS_BSP_CONFIGURE

RTEMS_PROG_CC_FOR_TARGET
RTEMS_CANONICALIZE_TOOLS
RTEMS_PROG_CCAS

##
RTEMS_BSP_ARG_ENABLE([iomem-patch],
[  --enable-iomem-patch=[[yes|no]]])
if test x"$enable_iomem_patch" = x"yes"; then
AC_DEFINE_UNQUOTED(
  [HAVE_SHSIM_IOMEM_PATCH],
  [1],
  [whether support for functional IOMEM in shsim/gdb shall be enabled])
fi

RTEMS_BSPOPTS_SET([CPU_CLOCK_RATE_HZ],[*],[20000000])
RTEMS_BSPOPTS_HELP([CPU_CLOCK_RATE_HZ],
[cpu clock rate in HZ])

RTEMS_BSPOPTS_SET([START_HW_INIT],[*],[])
RTEMS_BSPOPTS_HELP([START_HW_INIT],
[If defined, selects whether 'early_hw_init()' is called from 'start.S';
 'bsp_hw_init()' is always called from 'bspstart.c'])

## Used in scitab/Makefile.am
AC_SUBST(CPU_CLOCK_RATE_HZ)

RTEMS_BSP_CLEANUP_OPTIONS(0, 0)

# Explicitly list all Makefiles here
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
