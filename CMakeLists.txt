cmake_minimum_required(VERSION 3.16)

project(CppProblemSolving LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB SOLUTION_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach(source_file IN LISTS SOLUTION_SOURCES)
    get_filename_component(solution_name "${source_file}" NAME_WE)
    string(MAKE_C_IDENTIFIER "${solution_name}" target_name)
    string(MD5 target_suffix "${source_file}")
    string(SUBSTRING "${target_suffix}" 0 8 target_suffix)
    add_executable("${target_name}_${target_suffix}" "${source_file}")
endforeach()
