find_package(Threads REQUIRED)

include(DownloadGoogleTest)
include(DownloadGoogleMock)

add_executable(idextractortest main.cpp command/extractor_test.cpp)

include_directories(${COMMON_INCLUDES})

target_link_libraries(idextractortest
    libidextractor
    libgtest
    libgmock
)
