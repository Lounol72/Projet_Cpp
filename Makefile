CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17
LIBS = -lGL -lGLEW -lglfw

SRC = src/main.cpp src/GameEngine.cpp
INCLUDE = include/
OBJ = $(SRC:.cpp=.o)
BIN = bin/

all: $(OBJ)
	@echo "Building $(TARGET)"
	@$(CC) $(OBJ) -o $(BIN)/main $(LIBS)

clean:
	@echo "Cleaning up"
	@rm -f $(OBJ) $(BIN)/*

%.o: %.cpp
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@
