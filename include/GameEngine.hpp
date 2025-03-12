#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <GL/glew.h>
#include <GLFW/glfw3.h>

typedef struct GameEngine{
    GLFWwindow* window;
    int width;
    int height;
    float deltaTime;
    float lastFrame;

}GameEngine;

void initializeGame(GameEngine* gameEngine);
void closeGame(GameEngine* gameEngine);
#endif
