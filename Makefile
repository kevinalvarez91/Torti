CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
OBJ = main.o builtins.o
DEPS = builtins.h

# Default target
main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f *.o main
