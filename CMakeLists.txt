# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)


include($ENV{IDF_PATH}/tools/cmake/project.cmake)
set(EXTRA_COMPONENTS_DIRS "opcua-esp32/components/open62541lib" "opcua-esp32/components/ethernet" "opcua-esp32/components/model")
project(Talles_OPCUA_ESP)