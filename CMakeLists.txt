cmake_minimum_required(VERSION 3.7)
project(Langury)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp generations/second/B.h generations/second/B.cpp generations/fifties/Fortran.h generations/fifties/Fortran.cpp generations/eighties/Erlang.h generations/eighties/Erlang.cpp generations/eighties/Perl.h generations/seventies/Forth.h generations/seventies/Forth.cpp generations/seventies/Prolog.h generations/seventies/Prolog.cpp generations/seventies/Scheme.h generations/seventies/Ml.h generations/seventies/Ml.cpp generations/seventies/Awk.h generations/seventies/Awk.cpp generations/seventies/Ada.h generations/seventies/Ada.cpp generations/eighties/ObjectiveC.h generations/eighties/ObjectiveC.cpp)
add_executable(Langury ${SOURCE_FILES})