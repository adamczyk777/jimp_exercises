# Automake file

ACLOCAL_AMFLAGS = -I m4

# Nonstandard package files for distribution
EXTRA_DIST = \
  CHANGES \
  CONTRIBUTORS \
  LICENSE \
  include/gtest/gtest-param-out.h.pump \
  include/gtest/internal/gtest-param-util-generated.h.pump \
  include/gtest/internal/gtest-tuple.h.pump \
  include/gtest/internal/gtest-type-util.h.pump \
  make/Makefile \
  scripts/fuse_gtest_files.py \
  scripts/gen_gtest_pred_impl.py \
  scripts/pump.py \
  scripts/out/Makefile

# gtest source files that we don't compile directly.  They are
# #included by gtest-all.cc.
GTEST_SRC = \
  src/gtest-death-out.cc \
  src/gtest-filepath.cc \
  src/gtest-internal-inl.h \
  src/gtest-port.cc \
  src/gtest-printers.cc \
  src/gtest-out-part.cc \
  src/gtest-typed-out.cc \
  src/gtest.cc

EXTRA_DIST += $(GTEST_SRC)

# Sample files that we don't compile.
EXTRA_DIST += \
  samples/prime_tables.h \
  samples/sample2_unittest.cc \
  samples/sample3_unittest.cc \
  samples/sample4_unittest.cc \
  samples/sample5_unittest.cc \
  samples/sample6_unittest.cc \
  samples/sample7_unittest.cc \
  samples/sample8_unittest.cc \
  samples/sample9_unittest.cc

# C++ out files that we don't compile directly.
EXTRA_DIST += \
  out/gtest-death-test_ex_test.cc \
  out/gtest-death-test_test.cc \
  out/gtest-filepath_test.cc \
  out/gtest-linked_ptr_test.cc \
  out/gtest-listener_test.cc \
  out/gtest-message_test.cc \
  out/gtest-options_test.cc \
  out/gtest-param-test2_test.cc \
  out/gtest-param-test2_test.cc \
  out/gtest-param-test_test.cc \
  out/gtest-param-test_test.cc \
  out/gtest-param-test_test.h \
  out/gtest-port_test.cc \
  out/gtest_premature_exit_test.cc \
  out/gtest-printers_test.cc \
  out/gtest-out-part_test.cc \
  out/gtest-tuple_test.cc \
  out/gtest-typed-test2_test.cc \
  out/gtest-typed-test_test.cc \
  out/gtest-typed-test_test.h \
  out/gtest-unittest-api_test.cc \
  out/gtest_break_on_failure_unittest_.cc \
  out/gtest_catch_exceptions_test_.cc \
  out/gtest_color_test_.cc \
  out/gtest_env_var_test_.cc \
  out/gtest_environment_test.cc \
  out/gtest_filter_unittest_.cc \
  out/gtest_help_test_.cc \
  out/gtest_list_tests_unittest_.cc \
  out/gtest_main_unittest.cc \
  out/gtest_no_test_unittest.cc \
  out/gtest_output_test_.cc \
  out/gtest_pred_impl_unittest.cc \
  out/gtest_prod_test.cc \
  out/gtest_repeat_test.cc \
  out/gtest_shuffle_test_.cc \
  out/gtest_sole_header_test.cc \
  out/gtest_stress_test.cc \
  out/gtest_throw_on_failure_ex_test.cc \
  out/gtest_throw_on_failure_test_.cc \
  out/gtest_uninitialized_test_.cc \
  out/gtest_unittest.cc \
  out/gtest_unittest.cc \
  out/gtest_xml_outfile1_test_.cc \
  out/gtest_xml_outfile2_test_.cc \
  out/gtest_xml_output_unittest_.cc \
  out/production.cc \
  out/production.h

# Python tests that we don't run.
EXTRA_DIST += \
  out/gtest_break_on_failure_unittest.py \
  out/gtest_catch_exceptions_test.py \
  out/gtest_color_test.py \
  out/gtest_env_var_test.py \
  out/gtest_filter_unittest.py \
  out/gtest_help_test.py \
  out/gtest_list_tests_unittest.py \
  out/gtest_output_test.py \
  out/gtest_output_test_golden_lin.txt \
  out/gtest_shuffle_test.py \
  out/gtest_test_utils.py \
  out/gtest_throw_on_failure_test.py \
  out/gtest_uninitialized_test.py \
  out/gtest_xml_outfiles_test.py \
  out/gtest_xml_output_unittest.py \
  out/gtest_xml_test_utils.py

# CMake script
EXTRA_DIST += \
  CMakeLists.txt \
  cmake/internal_utils.cmake

# MSVC project files
EXTRA_DIST += \
  msvc/gtest-md.sln \
  msvc/gtest-md.vcproj \
  msvc/gtest.sln \
  msvc/gtest.vcproj \
  msvc/gtest_main-md.vcproj \
  msvc/gtest_main.vcproj \
  msvc/gtest_prod_test-md.vcproj \
  msvc/gtest_prod_test.vcproj \
  msvc/gtest_unittest-md.vcproj \
  msvc/gtest_unittest.vcproj

# xcode project files
EXTRA_DIST += \
  xcode/Config/DebugProject.xcconfig \
  xcode/Config/FrameworkTarget.xcconfig \
  xcode/Config/General.xcconfig \
  xcode/Config/ReleaseProject.xcconfig \
  xcode/Config/StaticLibraryTarget.xcconfig \
  xcode/Config/TestTarget.xcconfig \
  xcode/Resources/Info.plist \
  xcode/Scripts/runtests.sh \
  xcode/Scripts/versiongenerate.py \
  xcode/gtest.xcodeproj/project.pbxproj

# xcode sample files
EXTRA_DIST += \
  xcode/Samples/FrameworkSample/Info.plist \
  xcode/Samples/FrameworkSample/WidgetFramework.xcodeproj/project.pbxproj \
  xcode/Samples/FrameworkSample/runtests.sh \
  xcode/Samples/FrameworkSample/widget.cc \
  xcode/Samples/FrameworkSample/widget.h \
  xcode/Samples/FrameworkSample/widget_test.cc

# C++Builder project files
EXTRA_DIST += \
  codegear/gtest.cbproj \
  codegear/gtest.groupproj \
  codegear/gtest_all.cc \
  codegear/gtest_link.cc \
  codegear/gtest_main.cbproj \
  codegear/gtest_unittest.cbproj

# Distribute and install M4 macro
m4datadir = $(datadir)/aclocal
m4data_DATA = m4/gtest.m4
EXTRA_DIST += $(m4data_DATA)

# We define the global AM_CPPFLAGS as everything we compile includes from these
# directories.
AM_CPPFLAGS = -I$(srcdir) -I$(srcdir)/include

# Modifies compiler and linker flags for pthreads compatibility.
if HAVE_PTHREADS
  AM_CXXFLAGS = @PTHREAD_CFLAGS@ -DGTEST_HAS_PTHREAD=1
  AM_LIBS = @PTHREAD_LIBS@
else
  AM_CXXFLAGS = -DGTEST_HAS_PTHREAD=0
endif

# Build rules for libraries.
lib_LTLIBRARIES = lib/libgtest.la lib/libgtest_main.la

lib_libgtest_la_SOURCES = src/gtest-all.cc

pkginclude_HEADERS = \
  include/gtest/gtest-death-out.h \
  include/gtest/gtest-message.h \
  include/gtest/gtest-param-out.h \
  include/gtest/gtest-printers.h \
  include/gtest/gtest-spi.h \
  include/gtest/gtest-out-part.h \
  include/gtest/gtest-typed-out.h \
  include/gtest/gtest.h \
  include/gtest/gtest_pred_impl.h \
  include/gtest/gtest_prod.h

pkginclude_internaldir = $(pkgincludedir)/internal
pkginclude_internal_HEADERS = \
  include/gtest/internal/gtest-death-out-internal.h \
  include/gtest/internal/gtest-filepath.h \
  include/gtest/internal/gtest-internal.h \
  include/gtest/internal/gtest-linked_ptr.h \
  include/gtest/internal/gtest-param-util-generated.h \
  include/gtest/internal/gtest-param-util.h \
  include/gtest/internal/gtest-port.h \
  include/gtest/internal/gtest-port-arch.h \
  include/gtest/internal/gtest-string.h \
  include/gtest/internal/gtest-tuple.h \
  include/gtest/internal/gtest-type-util.h \
  include/gtest/internal/custom/gtest.h \
  include/gtest/internal/custom/gtest-port.h \
  include/gtest/internal/custom/gtest-printers.h

lib_libgtest_main_la_SOURCES = src/gtest_main.cc
lib_libgtest_main_la_LIBADD = lib/libgtest.la

# Bulid rules for samples and tests. Automake's naming for some of
# these variables isn't terribly obvious, so this is a brief
# reference:
#
# TESTS -- Programs run automatically by "make check"
# check_PROGRAMS -- Programs built by "make check" but not necessarily run

noinst_LTLIBRARIES = samples/libsamples.la

samples_libsamples_la_SOURCES = \
  samples/sample1.cc \
  samples/sample1.h \
  samples/sample2.cc \
  samples/sample2.h \
  samples/sample3-inl.h \
  samples/sample4.cc \
  samples/sample4.h

TESTS=
TESTS_ENVIRONMENT = GTEST_SOURCE_DIR="$(srcdir)/out" \
                    GTEST_BUILD_DIR="$(top_builddir)/out"
check_PROGRAMS=

# A simple sample on using gtest.
TESTS += samples/sample1_unittest
check_PROGRAMS += samples/sample1_unittest
samples_sample1_unittest_SOURCES = samples/sample1_unittest.cc
samples_sample1_unittest_LDADD = lib/libgtest_main.la \
                                 lib/libgtest.la \
                                 samples/libsamples.la

# Another sample.  It also verifies that libgtest works.
TESTS += samples/sample10_unittest
check_PROGRAMS += samples/sample10_unittest
samples_sample10_unittest_SOURCES = samples/sample10_unittest.cc
samples_sample10_unittest_LDADD = lib/libgtest.la

# This tests most constructs of gtest and verifies that libgtest_main
# and libgtest work.
TESTS += out/gtest_all_test
check_PROGRAMS += out/gtest_all_test
test_gtest_all_test_SOURCES = out/gtest_all_test.cc
test_gtest_all_test_LDADD = lib/libgtest_main.la \
                            lib/libgtest.la

# Tests that fused gtest files compile and work.
FUSED_GTEST_SRC = \
  fused-src/gtest/gtest-all.cc \
  fused-src/gtest/gtest.h \
  fused-src/gtest/gtest_main.cc

if HAVE_PYTHON
TESTS += out/fused_gtest_test
check_PROGRAMS += out/fused_gtest_test
test_fused_gtest_test_SOURCES = $(FUSED_GTEST_SRC) \
                                samples/sample1.cc samples/sample1_unittest.cc
test_fused_gtest_test_CPPFLAGS = -I"$(srcdir)/fused-src"

# Build rules for putting fused Google Test files into the distribution
# package. The user can also create those files by manually running
# scripts/fuse_gtest_files.py.
$(test_fused_gtest_test_SOURCES): fused-gtest

fused-gtest: $(pkginclude_HEADERS) $(pkginclude_internal_HEADERS) \
             $(GTEST_SRC) src/gtest-all.cc src/gtest_main.cc \
             scripts/fuse_gtest_files.py
	mkdir -p "$(srcdir)/fused-src"
	chmod -R u+w "$(srcdir)/fused-src"
	rm -f "$(srcdir)/fused-src/gtest/gtest-all.cc"
	rm -f "$(srcdir)/fused-src/gtest/gtest.h"
	"$(srcdir)/scripts/fuse_gtest_files.py" "$(srcdir)/fused-src"
	cp -f "$(srcdir)/src/gtest_main.cc" "$(srcdir)/fused-src/gtest/"

maintainer-clean-local:
	rm -rf "$(srcdir)/fused-src"
endif

# Death tests may produce core dumps in the build directory. In case
# this happens, clean them to keep distcleancheck happy.
CLEANFILES = core

# Disables 'make install' as installing a compiled version of Google
# Test can lead to undefined behavior due to violation of the
# One-Definition Rule.

install-exec-local:
	echo "'make install' is dangerous and not supported. Instead, see README for how to integrate Google Test into your build system."
	false

install-word-local:
	echo "'make install' is dangerous and not supported. Instead, see README for how to integrate Google Test into your build system."
	false
