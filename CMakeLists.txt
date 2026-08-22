cmake_minimum_required(VERSION 3.20)

project(wrong-calculator LANGUAGES CXX)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_VERSION "0.2.0-alpha")
set(CPACK_PACKAGE_CONTACT "sammyj48")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
include(CPack)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wrong-calculator main.cpp)

include(GNUInstallDirs)
install(TARGETS wrong-calculator
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
cpack_add_component(wrong-calculator

)
