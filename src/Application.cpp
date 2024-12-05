#include <glfw3.h>
#include "Window.h"

int main(int argc, char* argv[])
{
    // Initialize GLFW
    if ( !glfwInit() ) { return -1; }

    Window window("OpenGL Raytracer", 1280, 720);
    if ( !window.WinObject ) 
    {
        glfwTerminate();
        return -1;
    }

    window.Start();

    while ( !window.ShouldClose() ) 
    {
        window.Update();
    }

    return 0;
}