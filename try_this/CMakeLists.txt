set (LIB_TYPE "SHARED" CACHE STRING "Change this to STATIC to see no tests being executed")
add_library (try_this_lib ${LIB_TYPE}
    "func.cpp"
    "tests.cpp"
    "api.cpp")
target_link_libraries (try_this_lib PRIVATE gmock)

add_executable (try_this
    "main.cpp")
target_link_libraries (try_this PRIVATE try_this_lib)

