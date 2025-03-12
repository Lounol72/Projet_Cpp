#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <GL/glew.h>
#include <GLFW/glfw3.h>

typedef struct GameEngine{
    GLFWwindow* window;

}GameEngine;

void initializeGame();


#endif
