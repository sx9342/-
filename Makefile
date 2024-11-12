CC = gcc #编译器为gcc
CFLAGS = -g -Iinclude
OBJECTS = src/menu.o src/main.o src/home.o
EXECUTABLE = system
LDFLAGS = -mconsole
HEADFILE = include/head.h
all: $(EXECUTABLE)
.PHONY: all clean
src/menu.o: src/menu.c $(HEADFILE)
	@echo "Compiling src/menu.c to src/menu.o"
	$(CC) $(CFLAGS) -c src/menu.c -o src/menu.o

src/home.o: src/home.c $(HEADFILE)
	@echo "Compiling src/home.c to src/home"
	$(CC) $(CFLAGS) -c src/home.c -o src/home.o

src/main.o: src/main.c $(HEADFILE)
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o	
$(EXECUTABLE): $(OBJECTS)
	@echo "Linking objects to create $(EXECUTABLE)"
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

clean: 
	@echo "Cleaning up object and executable files"
	rm -f $(OBJECTS) $(EXECUTABLE)