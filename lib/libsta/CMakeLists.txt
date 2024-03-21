# Minimun version required of CMAKE, if not throws an error
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Definition of the project, name description, language, etc
project(
    "Static_C_Lib"
    VERSION 1.0.0
    DESCRIPTION "CMake C project simple static library"
    LANGUAGES C
)

# Definition of the C Standard
set(CMAKE_C_STANDARD 17)

# Set include directories
include_directories(include)

# Definition of the source code to compile
file(GLOB_RECURSE SOURCES "src/*.c")

# Create the executable
add_library(${PROJECT_NAME} STATIC ${SOURCES})
