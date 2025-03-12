#include "../include/GameEngine.hpp"
#include <iostream>

void initializeGame(GameEngine* gameEngine) {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return;
    }

    // Configure GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create window
    gameEngine->window = glfwCreateWindow(800, 600, "OpenGL Game", NULL, NULL);
    if (!gameEngine->window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }

    // Make the window's context current
    glfwMakeContextCurrent(gameEngine->window);

    // Initialize GLEW
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        return;
    }

    
    glfwGetFramebufferSize(gameEngine->window, &gameEngine->width, &gameEngine->height);
    glViewport(0, 0, gameEngine->width, gameEngine->height);
}

void closeGame(GameEngine* gameEngine) {
    glfwDestroyWindow(gameEngine->window);
    glfwTerminate();
}