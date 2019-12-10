cmake_minimum_required(VERSION 3.1)
cmake_policy(PUSH)
cmake_policy(SET CMP0048 NEW) # allow setting project version

project(xtensor-example)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/submodules/xtl)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/submodules/xtensor)


add_executable(xtensorexample)
target_sources(xtensorexample PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    )
set_target_properties(xtensorexample PROPERTIES
    OUTPUT_NAME "xtensorexample"
    CXX_STANDARD 17
    )
target_compile_definitions(xtensorexample PRIVATE
#    WIN32_LEAN_AND_MEAN # remove byte compile error
    )
target_include_directories(xtensorexample PRIVATE
    )
target_link_libraries(xtensorexample PRIVATE
    xtl
    xtensor
    )






cmake_policy(POP) # Keep last to undo policy


