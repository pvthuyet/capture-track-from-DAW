include(FetchContent)

message(STATUS "Fetching ara_sdk...")
FetchContent_Declare(
    ara_sdk
    GIT_REPOSITORY https://github.com/Celemony/ARA_SDK.git
    DOWNLOAD_EXTRACT_TIMESTAMP true
    GIT_TAG releases/2.2.0
    GIT_SUBMODULES ARA_API ARA_Library
)
FetchContent_MakeAvailable(ara_sdk)
message(STATUS "ara_sdk_BINARY_DIR: ${ara_sdk_BINARY_DIR}")
message(STATUS "ara_sdk_SOURCE_DIR: ${ara_sdk_SOURCE_DIR}")
include_directories(${ara_sdk_SOURCE_DIR})

#======================================

message(STATUS "Fetching JUCE...")

FetchContent_Declare(
    juce
    URL https://github.com/juce-framework/JUCE/archive/refs/tags/7.0.5.tar.gz
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

FetchContent_MakeAvailable(juce)

message(STATUS "juce_SOURCE_DIR: ${juce_SOURCE_DIR}")
message(STATUS "juce_BINARY_DIR: ${juce_BINARY_DIR}")

set(juce_modules
    juce::juce_audio_basics
    juce::juce_audio_devices
    juce::juce_audio_formats
    juce::juce_audio_plugin_client
    juce::juce_audio_processors
    juce::juce_audio_utils
    juce::juce_core
    juce::juce_data_structures
    juce::juce_events
    juce::juce_graphics
    juce::juce_gui_basics
    juce::juce_gui_extra
)