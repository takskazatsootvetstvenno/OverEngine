cmake_minimum_required(VERSION 3.20)

set(EDITOR_PROJECT_NAME OverEngineEditor)

if(MSVC)
	 add_compile_options(/MP)
endif()

add_executable(${EDITOR_PROJECT_NAME}
	src/main.cpp
)

target_link_libraries(${EDITOR_PROJECT_NAME} OverEngineCore)
#target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)



set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES
						RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
						
message(!!!!!!${CMAKE_SOURCE_DIR})
message(==== ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET ${EDITOR_PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:${EDITOR_PROJECT_NAME}>)
add_custom_command(TARGET ${EDITOR_PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/res ${CMAKE_CURRENT_BINARY_DIR})