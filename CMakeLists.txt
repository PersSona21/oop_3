cmake_minimum_required(VERSION 3.14)
project(FiguresProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Пути к исходникам и заголовкам
include_directories(include)

# Источники основной библиотеки фигур
add_library(figures
    src/Figure.cpp
    src/Rhombus.cpp
    src/Pentagon.cpp
    src/Hexagon.cpp
)

# ===== GoogleTest =====
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
# Предотвращаем установку gtest в систему
set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)

enable_testing()

# ===== Тесты =====
add_executable(test_figures
    tests/test_figures.cpp
)
target_link_libraries(test_figures
    figures
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_figures)
