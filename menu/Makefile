CC=gcc
CFLAGS=-g
LIBS=-lncurses
TARGET=menu

all: $(TARGET)

$(TARGET): menu.o main.o
	$(CC) $(CFLAGS) $(LIBS) -o $(TARGET) main.o menu.o

menu.o: menu.c menu.h
	$(CC) $(CFLAGS) -c menu.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	$(RM) $(TARGET) *.o
