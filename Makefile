CC := g++
CFLAGS := -g -Wall -I include/
BUILD := build/
SRC := src/
TARGET := main.out
.RECIPEPREFIX +=

all: 
 $(CC)  *.cpp -o $(TARGET)

clean:

 $(RM) -r  $(TARGET)