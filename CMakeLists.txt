# Minimun version required of CMAKE, if not throws an error
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Definition of the project, name description, language, etc
project(
    "First_CMake_Project"
    VERSION 1.2.0
    DESCRIPTION "CMake C Project for Operating Systems II"
    LANGUAGES C
)

# Enable testing
include(CTest)

# Definition of the C Standard
set(CMAKE_C_STANDARD 17)

# Set include directories
include_directories(include)

# Load Fetch Content module to download external projects
include(FetchContent)

# Download Unity to test the project, setting the variable tha holds the URL
set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

# Enable debug
set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY ${UNITY_GIT_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
    UPDATE_COMMAND "" # disable update command
)

# Ensures the named dependencies have been populated
FetchContent_MakeAvailable(Unity)

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

#Add subdirectory of tests
if(RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
    add_subdirectory(tests)
endif()
