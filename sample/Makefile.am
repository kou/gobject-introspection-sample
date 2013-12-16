CLEANFILES =

AM_CPPFLAGS =					\
	 -I$(top_builddir)			\
	 -I$(top_srcdir)

AM_CFLAGS =					\
	$(GLIB_CFLAGS)

lib_LTLIBRARIES =				\
	libsample.la

libsample_la_LIBADD =				\
	$(GLIB_LIBS)

libsample_la_SOURCES =				\
	greeter.c				\
	greeter.h

-include $(INTROSPECTION_MAKEFILE)
INTROSPECTION_GIRS =
INTROSPECTION_SCANNER_ARGS =
INTROSPECTION_COMPILER_ARGS =

if HAVE_INTROSPECTION
Sample-1.0.gir: libsample.la
Sample_1_0_gir_PACKAGES =
Sample_1_0_gir_EXPORT_PACKAGES = sample
Sample_1_0_gir_INCLUDES = GObject-2.0
Sample_1_0_gir_CFLAGS =
Sample_1_0_gir_LIBS = libsample.la
Sample_1_0_gir_FILES = $(libsample_la_SOURCES)
Sample_1_0_gir_SCANNERFLAGS =			\
	--identifier-prefix=Sample		\
	--symbol-prefix=sample
INTROSPECTION_GIRS += Sample-1.0.gir

girdir = $(datadir)/gir-1.0
gir_DATA = $(INTROSPECTION_GIRS)

typelibdir = $(libdir)/girepository-1.0
typelib_DATA = $(INTROSPECTION_GIRS:.gir=.typelib)

CLEANFILES +=					\
	$(gir_DATA)				\
	$(typelib_DATA)
endif
