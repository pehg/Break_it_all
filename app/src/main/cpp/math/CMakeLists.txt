add_library(math SHARED
        src/math/math_utils.cpp
        src/math/Vector.cpp)

target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)