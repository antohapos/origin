﻿# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
# if (POLICY CMP0141)
 # cmake_policy(SET CMP0141 NEW)
 # set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
# endif()

project ("CMakeProject1")

add_library(DynamicLib SHARED LeaverLib.h LeaverLib.cpp)
add_executable(LeavingClientExe LeavingClient.cpp)
target_link_libraries(LeavingClientExe DynamicLib)

