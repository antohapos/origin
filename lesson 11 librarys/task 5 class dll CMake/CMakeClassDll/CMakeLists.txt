# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
# if (POLICY CMP0141)
 # cmake_policy(SET CMP0141 NEW)
 # set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
# endif()

project ("CMakeProject1")

add_library(FigureClassDll SHARED class_Triangle.h class_Triangle.cpp class_Square.h class_Square.cpp class_Right_triangle.h class_Right_triangle.cpp class_Rhombus.h class_Rhombus.cpp class_Rectangle.h class_Rectangle.cpp class_Quadrangle.h class_Quadrangle.cpp class_Parallelogram.h class_Parallelogram.cpp class_Isosceles_triangle.h class_Isosceles_triangle.cpp class_Figure.h class_Figure.cpp class_Equilateral_triangle.cpp class_Equilateral_triangle.h)
add_executable(FigureClassClientExe lesson6_task3.cpp)
target_link_libraries(FigureClassClientExe FigureClassDll)