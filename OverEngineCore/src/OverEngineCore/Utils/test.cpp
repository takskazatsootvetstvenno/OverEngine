#include <GLFW/glfw3.h>

#include <iostream>

namespace OverEngine {
void CHECK_GLFW() {
#include <GLFW/glfw3.h>

  GLFWwindow* window;

  /* Initialize the library */
  if (!glfwInit()) return ;

  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!window) {
    glfwTerminate();
    return ;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(window);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(window)) {
    /* Render here */
    // glClear(GL_COLOR_BUFFER_BIT);

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
  }

  glfwTerminate();
}

}  // namespace OverEngine
