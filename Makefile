CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17
LIBS = -lGL -lGLEW -lglfw

SRC = src/main.cpp
INCLUDE = include/
OBJ = $(SRC:.cpp=.o)
TARGET = bin/main

all: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

clean:
	rm -f $(OBJ) $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
