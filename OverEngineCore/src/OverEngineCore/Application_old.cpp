#include "OverEngineCore/Application.hpp"
#include "OverEngineCore/Log.hpp"
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include <assimp/Importer.hpp>

#include <assimp/postprocess.h>
#include <assimp/scene.h>
//#define STB_IMAGE_IMPLEMENTATION
#include "OverEngineCore/stb_image.h"

#include <iostream>
namespace OverEngine {

Application_Engine::Application_Engine() {
}
Application_Engine::~Application_Engine() {
}
/*
int Application_Engine::start(unsigned int window_width, unsigned int window_height, const char* title) {

    FT_Library ft;
    if (FT_Init_FreeType(&ft))  // все функции в случае ошибки возвращают значение, отличное от 0
        std::cout << "ERROR::FREETYPE: Could not init FreeType Library" << std::endl;

    // Загрузка шрифта в качестве face
    FT_Face face;

      Assimp::Importer importer;
    stbi_set_flip_vertically_on_load(false);
    LOG_INFO("GLFW_INIT");
    GLFWwindow* window;

    if (!glfwInit()) return -1;

  
    window = glfwCreateWindow(window_width, window_height, title, NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

  
    glfwMakeContextCurrent(window);


    while (!glfwWindowShouldClose(window)) {
      
        glm::vec4 white_color(0.0);
        glClearColor(white_color.x,white_color.y,white_color.z,white_color.w);
        glClear(GL_COLOR_BUFFER_BIT);

       
        glfwSwapBuffers(window);

     
        glfwPollEvents();

        on_update();
    }

    glfwTerminate();
    return 0;
}
*/
}  // namespace OverEngine
