#Makefiles
_________

A Makefile is a special file used in the C programming language (and other programming languages) to automate the build process of a program.
The build process involves compiling the source code files, linking them together, and producing the final executable or binary file.
The Makefile contains a set of rules and dependencies that specify how the program should be built.
Each rule typically includes a target, dependencies, and a set of commands. Here's a simple example of a Makefile for a C program

# Makefile for a simple C program

Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = myprogram

# Source files
SRCS = main.c helper.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up the build files
clean:
	rm -f $(OBJS) $(TARGET)


CC is the compiler (gcc in this case).
CFLAGS are the compiler flags, such as enabling warnings and generating debug information.
TARGET is the name of the final executable.
SRCS is a list of the source code files.
OBJS is a list of the corresponding object files.
The all target is the default target that will be built if you just run make without specifying a target.
The rule for building the executable specifies that it depends on the object files and provides the command to link them together.
The rule for compiling source files to object files specifies the command to compile each source file.
The clean target is used to remove the generated object files and the executable.
To build your program, you simply run the make command in the directory containing the Makefile. It will automatically compile the source files, link them, and produce the final executable. The make clean command can be used to remove the generated files when you want to clean up the project.
