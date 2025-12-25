cmake_minimum_required(VERSION 3.10)
project(CODE-BURGAS-Archive)

# Find all C++ files recursively
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

foreach(SOURCE_FILE ${SOURCES})
    string(REPLACE "/" "_" TARGET_NAME "${SOURCE_FILE}")
    string(REPLACE " " "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "." "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "-" "_" TARGET_NAME "${TARGET_NAME}")

    get_filename_component(TARGET_BASE "${SOURCE_FILE}" NAME_WE)
    get_filename_component(PARENT_DIR "${SOURCE_FILE}" DIRECTORY)

    string(REPLACE "/" "_" CLEAN_PATH "${SOURCE_FILE}")
    string(REPLACE " " "_" CLEAN_PATH "${CLEAN_PATH}")
    string(REPLACE "." "_" CLEAN_PATH "${CLEAN_PATH}")
    string(REPLACE "-" "_" CLEAN_PATH "${CLEAN_PATH}")

    string(REGEX REPLACE "_cpp$" "" TARGET_NAME "${CLEAN_PATH}")

    add_executable(${TARGET_NAME} "${SOURCE_FILE}")
endforeach()
