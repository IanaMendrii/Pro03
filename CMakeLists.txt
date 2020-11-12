cmake_minimum_required(VERSION 3.8)

project(Pro03)
set(CMAKE_BUILD_TYPE Release)
set(SRC_DIR src)

set(EXAMPLE_SRC ${SRC_DIR}/main.cpp
                ${SRC_DIR}/game.cpp
                ${SRC_DIR}/creatures.cpp
				${SRC_DIR}/lizardman.cpp
				${SRC_DIR}/elf.cpp
				${SRC_DIR}/snakeman.cpp
                ${SRC_DIR}/human.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${EXAMPLE_SRC})

set_property(TARGET Pro03 PROPERTY CXX_STANDARD 11)
set_property(TARGET Pro03 PROPERTY CXX_STANDARD_REQUIRED ON)