lib_LTLIBRARIES = libtestclass_codels.la

libtestclass_codels_la_SOURCES=	testclass_c_types.h
libtestclass_codels_la_SOURCES+=	testclass_codels.cc
libtestclass_codels_la_SOURCES+=	testclass_A_codels.cc
libtestclass_codels_la_SOURCES+=	testclass_B_codels.cc

libtestclass_codels_la_SOURCES+=	Date.h
libtestclass_codels_la_SOURCES+=	Date.cc

libtestclass_codels_la_CPPFLAGS=	$(requires_CFLAGS)
libtestclass_codels_la_LDFLAGS=	$(requires_LIBS)
libtestclass_codels_la_LDFLAGS+=	-release $(PACKAGE_VERSION)


# idl  mappings
BUILT_SOURCES=	testclass_c_types.h
CLEANFILES=	${BUILT_SOURCES}
testclass_c_types.h: ${top_srcdir}/testclass.gen
	${genom3}  mappings \
	  -MD -MF .deps/$@.d -MT $@ --signature -l c $< >$@

-include .deps/testclass_c_types.h.d
