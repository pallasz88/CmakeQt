cmake_minimum_required(VERSION 3.1.0)

project(calculator_widget)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt resource files
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED Widgets Multimedia)

# Populate a CMake variable with the sources
set(calculator_SRCS
    Bullet.cpp
    Enemy.cpp
    Game.cpp
    Health.cpp
    Player.cpp
    Score.cpp
    main.cpp
	res.qrc
)

set(calculator_HDRS
    Bullet.h
    Enemy.h
    Game.h
    Health.h
    Player.h
    Score.h)

set(calculator_LIBS
	Qt5::Widgets
	Qt5::Multimedia)

add_executable(calculator WIN32 ${calculator_SRCS} ${calculator_HDRS})

target_link_libraries(calculator ${calculator_LIBS})