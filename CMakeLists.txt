cmake_minimum_required(VERSION 3.20)

project(wrong-calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wrong-calculator main.cpp)

include(GNUInstallDirs)
install(TARGETS wrong-calculator
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
