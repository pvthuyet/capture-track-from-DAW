include(FetchContent)

message(STATUS "Fetching Boost Extensions DI...")

FetchContent_Declare(
    boost_ext_di
    URL https://github.com/boost-ext/di/archive/refs/tags/v1.2.0.tar.gz
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

FetchContent_MakeAvailable(boost_ext_di)

message(STATUS "boost_ext_di_SOURCE_DIR: ${boost_ext_di_SOURCE_DIR}")
message(STATUS "boost_ext_di_BINARY_DIR: ${boost_ext_di_BINARY_DIR}")

include_directories(${boost_ext_di_SOURCE_DIR}/include)