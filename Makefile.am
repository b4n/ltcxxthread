lib_LTLIBRARIES = libthreads.la
noinst_PROGRAMS = threads

libthreads_la_SOURCES = threads.cxx
libthreads_la_CXXFLAGS = -pthread

threads_SOURCES = threadmain.cxx
threads_LDADD = libthreads.la
