include_directories(${COMMON_INCLUDES})
add_executable(idextractor main.cpp)
target_link_libraries(idextractor
    libidextractor
)
