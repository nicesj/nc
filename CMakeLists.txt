CMAKE_MINIMUM_REQUIRED(VERSION 3.4.1)
PROJECT(NewC CXX)

SET_PROPERTY(GLOBAL PROPERTY GLOBAL_DEPENDS_DEBUG_MODE 0)

ADD_SUBDIRECTORY(subprojects/nc)
ADD_SUBDIRECTORY(subprojects/sample)
