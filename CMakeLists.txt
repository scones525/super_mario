cmake_minimum_required(VERSION 3.24)
project(super_mario)

set(CMAKE_CXX_STANDARD 14)

add_executable(super_mari Source/Main.cpp)

include_directories(Source/Headers)

add_executable(super_mario
        Source/Headers/Animation.hpp
        Source/Headers/ConvertSketch.hpp
        Source/Headers/DrawMap.hpp
        Source/Headers/Enemy.hpp
        Source/Headers/Global.hpp
        Source/Headers/Goomba.hpp
        Source/Headers/Koopa.hpp
        Source/Headers/MapCollision.hpp
        Source/Headers/MapManager.hpp
        Source/Headers/Mario.hpp
        Source/Headers/Mushroom.hpp
        Source/Animation.cpp
        Source/ConvertSketch.cpp
        Source/DrawMap.cpp
        Source/Enemy.cpp
        Source/Goomba.cpp
        Source/Koopa.cpp
        Source/Main.cpp
        Source/MapCollision.cpp
        Source/MapManager.cpp
        Source/Mario.cpp
        Source/Mushroom.cpp)

set(SFML_STATIC_LIBRARIES TURE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(super_mari sfml-system sfml-window sfml-graphics sfml-audio)