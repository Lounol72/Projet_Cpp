#include <iostream>
#include "../include/GameEngine.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    GameEngine gameEngine;
    initializeGame(&gameEngine);

    while (!glfwWindowShouldClose(gameEngine.window)) {
        float currentFrame = glfwGetTime();
        gameEngine.deltaTime = currentFrame - gameEngine.lastFrame;
        gameEngine.lastFrame = currentFrame;

        glfwSwapBuffers(gameEngine.window);
        glfwPollEvents();
        std::cout << "Delta Time: " << gameEngine.deltaTime << std::endl;
        std::cout << "\033[A";
    }
    closeGame(&gameEngine);

    return 0;
}

