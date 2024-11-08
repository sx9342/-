CC = gcc #编译器为gcc
CFLAGS = -g
OBJECTS = src/menu.o src/main.o
EXECUTABLE = menu
LDFLAGS = -mconsole
all: $(EXECUTABLE)
.PHONY: all clean
src/menu.o: src/menu.c 
	@echo "Compiling src/menu.c to src/menu.o"
	$(CC) $(CFLAGS) -c src/menu.c -o src/menu.o

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o	
$(EXECUTABLE): $(OBJECTS)
	@echo "Linking objects to create $(EXECUTABLE)"
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(EXECUTABLE)

clean: 
	@echo "Cleaning up object and executable files"
	rm -f $(OBJECTS) $(EXECUTABLE)