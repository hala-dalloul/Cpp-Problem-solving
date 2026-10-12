cmake_minimum_required(VERSION 3.16)

project(CppProblemSolving LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOLUTION_DIRECTORIES
    "KCPC 2023"
    arrays
    basics
    contest-959
    data-structures
    function
    greedy
    mathematics
    matrices
    prefix-sums
    searching
    simulation
    sorting
    stack
    strings
    two-pointers
)

foreach(solution_directory IN LISTS SOLUTION_DIRECTORIES)
    file(GLOB directory_sources CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/${solution_directory}/*.cpp"
    )

    foreach(source_file IN LISTS directory_sources)
        get_filename_component(solution_name "${source_file}" NAME_WE)
        string(MAKE_C_IDENTIFIER "${solution_name}" target_name)
        string(MD5 target_suffix "${source_file}")
        string(SUBSTRING "${target_suffix}" 0 8 target_suffix)
        add_executable("${target_name}_${target_suffix}" "${source_file}"
                "data-structures/C_EqualSums.cpp"
                basics/A_SauSaGe_Bank.cpp
                "basics/B_KiaKioAndSquaredNumbers .cpp"
                data-structures/sum_of_two_values.cpp)
    endforeach()
endforeach()
