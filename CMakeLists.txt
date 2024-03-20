# Minimun version required of CMAKE, if not throws an error
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Definition of the project, name description, language, etc
project(
    "First_CMake_Project"
    VERSION 1.1.0
    DESCRIPTION "CMake C Project for Operating Systems II"
    LANGUAGES C
)

# Definition of the C Standard
set(CMAKE_C_STANDARD 17)

# Set include directories
include_directories(include)

# Definition of flags
# set(CMAKE_C_FLAGS)

# Definition of the source code to compile
file(GLOB_RECURSE SOURCES "src/*.c")

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Compile the libraries
# This function searches for a CMakeLists.txt file in the folder specified and makes a separate project in there
add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

# Include headers in lib
target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

# Link the libraries
target_link_libraries(${PROJECT_NAME} Static_C_Lib Dynamic_C_Lib)
