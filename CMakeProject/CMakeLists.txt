cmake_minimum_required(VERSION 3.10)

project(ENT_Calculator VERSION 1.0)

add_library(capldll SHARED ../Sources/capldll.cpp ../src/ent.c ../src/chisq.c ../src/iso8859.c ../src/randtest.c)

if (WIN32)
  # Do not use the library file name prefix 'lib' on windows platforms (x86 and x64).
  set_target_properties(capldll PROPERTIES OUTPUT_NAME "ENT_Calculator" PREFIX "")
else()
  # Do not export all functions by default
  target_compile_options(capldll PUBLIC "-fvisibility=hidden")
endif()
