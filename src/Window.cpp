#include "Window.h"
#include <glfw3.h>

Window::Window( std::string windowName, int width, int height ) :
	m_Width( width ),
	m_Height( height )
{
	WinObject = glfwCreateWindow( width, height, windowName.c_str(), NULL, NULL );

}

void Window::Start()
{
	// Assuming OpenGL was initialized successfully
	// and WinObject was created successfully
	glfwMakeContextCurrent( WinObject );
}

void Window::Update()
{
	// Render here
	glClear( GL_COLOR_BUFFER_BIT );

	// Swap front and back buffers
	glfwSwapBuffers( WinObject );

	// Poll for and process events
	glfwPollEvents();
}

bool Window::ShouldClose()
{
	return glfwWindowShouldClose( WinObject );
}
