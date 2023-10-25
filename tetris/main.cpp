#include <iostream>

#pragma comment(lib, "opengl32.lib")

#include "GL/glew.h"
#include "GLFW/glfw3.h"

/*********************/

// window
GLFWwindow* T_window;

/*********************/

int main() {	
	if (!glfwInit()) return -1;

	// Create a windowed mode window and its OpenGL context 
	T_window = glfwCreateWindow(640, 480, "Tetris", NULL, NULL);
	if (!T_window) {
		glfwTerminate();
		return -1;
	}

	// Make the window's context current
	glfwMakeContextCurrent(T_window);

	while (!glfwWindowShouldClose(T_window)) {
		
		// Render here
		
		glClear(GL_COLOR_BUFFER_BIT);
		// Swap front and back buffers
		glfwSwapBuffers(T_window);
		// Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}