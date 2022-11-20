# makefile for checkPointV3 program
# created by filbri 2019-11-03

# variable definitions
CC = gcc
INC_DIR = inc
SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj

# this rule checks if executable file "test" exists or is out of date 
$(BIN_DIR)/test : $(OBJ_DIR)/main.o $(OBJ_DIR)/functions.o
	$(CC) -I$(INC_DIR) $(OBJ_DIR)/main.o $(OBJ_DIR)/functions.o -o $(BIN_DIR)/test

# this rule checks if object file main.o is out of date 
$(OBJ_DIR)/main.o : $(SRC_DIR)/main.c $(INC_DIR)/header.h
	$(CC) -I$(INC_DIR) -c -Wall $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

# this rule checks if object file functions.o is out of date 
$(OBJ_DIR)/functions.o : $(INC_DIR)/functions.c $(INC_DIR)/header.h
	$(CC) -I$(INC_DIR) -c -Wall $(INC_DIR)/functions.c -o $(OBJ_DIR)/functions.o
