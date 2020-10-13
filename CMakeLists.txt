cmake_minimum_required(VERSION 3.14)

if(WIN32)
	add_compile_options("/std:c++latest")
endif(WIN32)

set(CMAKE_CXX_STANDARD 17)

project(BasicLabyrinth)

add_executable(BasicLabyrinth
	${PROJECT_SOURCE_DIR}/Character.cpp
	${PROJECT_SOURCE_DIR}/Character.h
	${PROJECT_SOURCE_DIR}/command.cpp
	${PROJECT_SOURCE_DIR}/command.h
	${PROJECT_SOURCE_DIR}/Enemy.cpp
	${PROJECT_SOURCE_DIR}/Enemy.h
	${PROJECT_SOURCE_DIR}/main.cpp
	${PROJECT_SOURCE_DIR}/Player.cpp
	${PROJECT_SOURCE_DIR}/Player.h
	${PROJECT_SOURCE_DIR}/tile.cpp
	${PROJECT_SOURCE_DIR}/tile.h
	${PROJECT_SOURCE_DIR}/World.cpp
	${PROJECT_SOURCE_DIR}/World.h
)
