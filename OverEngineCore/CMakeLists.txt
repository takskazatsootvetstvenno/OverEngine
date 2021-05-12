cmake_minimum_required(VERSION 3.20)

set(CORE_PROJECT_NAME OverEngineCore)

set(CORE_PUBLIC_INCLUDES
	includes/OverEngineCore/stb_image.h
	includes/OverEngineCore/Application.hpp
	includes/OverEngineCore/Log.hpp
	
	includes/OverEngineCore/Application.h
	includes/OverEngineCore/Camera.h
	includes/OverEngineCore/ConsoleObj.h
	includes/OverEngineCore/CustomObject.h
	includes/OverEngineCore/MainDrawingLoop.h
	includes/OverEngineCore/Mesh.h
	includes/OverEngineCore/Model.h
	includes/OverEngineCore/Renderer.h
	includes/OverEngineCore/RenderText.h
	includes/OverEngineCore/Shader.h
	includes/OverEngineCore/TreeNode.h
	includes/OverEngineCore/UserMovement.h
	
)

set(CORE_PRIVATE_INCLUDES
	src/OverEngineCore/Application_old.cpp
	
	src/OverEngineCore/Application.cpp
	src/OverEngineCore/Camera.cpp
	src/OverEngineCore/ConsoleObj.cpp
	src/OverEngineCore/CustomObject.cpp
	src/OverEngineCore/main.cpp
	src/OverEngineCore/MainDrawingLoop.cpp
	src/OverEngineCore/Mesh.cpp
	src/OverEngineCore/Model.cpp
	src/OverEngineCore/Renderer.cpp
	src/OverEngineCore/RenderText.cpp
	src/OverEngineCore/Shader.cpp
	src/OverEngineCore/TreeNode.cpp
	src/OverEngineCore/UserMovement.cpp
	
)
if(MSVC)
	 add_compile_options(/MP)
endif()

add_library(${CORE_PROJECT_NAME} STATIC
	${CORE_PUBLIC_INCLUDES}
	${CORE_PRIVATE_INCLUDES}
)

target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)
#target_compile_features(${CORE_PROJECT_NAME} PUBLIC cxx_std_17)

#glfw
add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE glfw)

#glew
add_definitions(-DGLEW_STATIC)
option(glew-cmake_BUILD_SHARED off FORCE)
add_subdirectory(../external/glew ${CMAKE_CURRENT_BINARY_DIR}/glew)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE libglew_static)

#glm
add_subdirectory(../external/glm ${CMAKE_CURRENT_BINARY_DIR}/glm)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE glm)

#assimp
add_subdirectory(../external/assimp ${CMAKE_CURRENT_BINARY_DIR}/assimp)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE assimp)

#freetype
add_subdirectory(../external/freetype ${CMAKE_CURRENT_BINARY_DIR}/freetype)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE freetype)