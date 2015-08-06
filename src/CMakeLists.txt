include_directories(${COMMON_INCLUDES})
find_package(OpenCV REQUIRED)
add_library(libidextractor STATIC command/extractor.cpp detector.cpp matcher.cpp matcher.h)
target_link_libraries(libidextractor ${OpenCV_LIBS})
