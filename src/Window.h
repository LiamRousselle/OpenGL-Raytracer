#pragma once

#include <glfw3.h>
#include <iostream>
#include <string>

/*

	Window class is responsible for creating the GLFW window

	WinObject is the reference to the GLFW window

	Resolution may only be set during construction

*/

class Window
{
public:
	Window( std::string name, int width, int height );

	GLFWwindow* WinObject;

public:
	/*
		Used to initialize the WinObject and call any 
		additional methods related to OpenGL
	*/
	void Start();
	
	/*
		Called every frame.
		Used to handle OpenGL buffer/draw calls
	*/
	void Update();

	/*
		Returns if the window should close or not

		@returns:
			winClose: (boolean)
	*/
	bool ShouldClose();

protected:
	int m_Width;
	int m_Height;
};
