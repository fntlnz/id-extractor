include_directories(${COMMON_INCLUDES})
find_package(OpenCV REQUIRED)
add_library(libidextractor STATIC command/extractor.cpp)
target_link_libraries(libidextractor ${OpenCV_LIBS})
